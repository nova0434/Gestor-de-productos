#include "pch.h"
#include "Form1.h"
#include "Source.h"
#include <msclr/marshal_cppstd.h>

using namespace CppCLR_WinFormsProject1;

// -----------------------------
// CONSTRUCTOR
// -----------------------------

Form1::Form1(void)
{
    InitializeComponent();

    // Inicializar el árbol con los productos iniciales
    inicializarArbolConCategorias();

    // Llenar ComboBox con categorías
    for (auto c : categorias)
    {
        comboCategoria->Items->Add(
            gcnew System::String(c->nombre.c_str())
        );
    }

    // Mostrar categorías en el ListBox
    for (auto c : categorias)
    {
        listBoxCategorias->Items->Add(
            gcnew System::String(c->nombre.c_str())
        );
    }
}

// -----------------------------
// MOSTRAR PRODUCTOS POR CATEGORÍA
// -----------------------------

System::Void Form1::listBoxCategorias_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    listBoxProductos->Items->Clear();

    int index = listBoxCategorias->SelectedIndex;
    if (index < 0) return;

    auto categoria = categorias[index];

    for (auto& p : categoria->productos)
    {
        System::String^ linea =
            gcnew System::String((p.nombre + " - $" + std::to_string(p.precio)).c_str());

        listBoxProductos->Items->Add(linea);
    }
}

// -----------------------------
// AGREGAR PRODUCTO
// -----------------------------

System::Void Form1::btnAgregarProducto_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (txtNombre->Text == "" || txtPrecio->Text == "" || comboCategoria->Text == "")
    {
        MessageBox::Show("Complete todos los campos.");
        return;
    }

    std::string nombre = msclr::interop::marshal_as<std::string>(txtNombre->Text);
    std::string precioStr = msclr::interop::marshal_as<std::string>(txtPrecio->Text);
    std::string categoriaStr = msclr::interop::marshal_as<std::string>(comboCategoria->Text);

    float precio = 0.0f;

    try
    {
        precio = std::stof(precioStr);
    }
    catch (...)
    {
        MessageBox::Show("El precio debe ser un número válido.");
        return;
    }

    // Agregar a la categoría
    for (auto c : categorias)
    {
        if (c->nombre == categoriaStr)
        {
            c->productos.push_back(Producto(nombre, precio));

            // Insertar en el árbol
            insertarEnArbol(raiz, Producto(nombre, precio));

            break;
        }
    }

    MessageBox::Show("Producto agregado correctamente.");

    if (listBoxCategorias->SelectedIndex >= 0)
    {
        int index = listBoxCategorias->SelectedIndex;
        listBoxCategorias->ClearSelected();
        listBoxCategorias->SelectedIndex = index;
    }

    txtNombre->Clear();
    txtPrecio->Clear();
    comboCategoria->SelectedIndex = -1;
}

// -----------------------------
// BUSCAR PRODUCTO (USANDO EL ÁRBOL)
// -----------------------------

System::Void Form1::btnBuscar_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (txtBuscar->Text == "")
    {
        MessageBox::Show("Ingrese un nombre para buscar.");
        return;
    }

    std::string nombreBuscado = msclr::interop::marshal_as<std::string>(txtBuscar->Text);

    // Buscar en el árbol
    NodoProducto* nodo = buscarEnArbol(raiz, nombreBuscado);

    if (nodo != nullptr)
    {
        lblResultadoNombre->Text = "Nombre: " + gcnew System::String(nodo->dato.nombre.c_str());
        lblResultadoPrecio->Text = "Precio: $" + gcnew System::String(std::to_string(nodo->dato.precio).c_str());

        // Buscar categoría
        for (auto c : categorias)
        {
            for (auto& p : c->productos)
            {
                if (p.nombre == nodo->dato.nombre)
                {
                    lblResultadoCategoria->Text = "Categoría: " + gcnew System::String(c->nombre.c_str());
                    return;
                }
            }
        }

        lblResultadoCategoria->Text = "Categoría: (desconocida)";
        return;
    }

    MessageBox::Show("Producto no encontrado.");
}
