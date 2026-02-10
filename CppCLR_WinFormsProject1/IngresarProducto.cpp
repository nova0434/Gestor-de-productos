#include "pch.h"
#include "IngresarProducto.h"
#include "Source.h"
#include <msclr/marshal_cppstd.h>

using namespace CppCLR_WinFormsProject1;

IngresarProducto::IngresarProducto(void)
{
    InitializeComponent();

    // Llenar el ComboBox con las categorías globales
    for (auto c : categorias)
    {
        comboCategoria->Items->Add(
            gcnew System::String(c->nombre.c_str())
        );
    }
}

System::Void IngresarProducto::btnGuardar_Click(System::Object^ sender, System::EventArgs^ e)
{
    // Validación básica
    if (txtNombre->Text == "" || txtPrecio->Text == "" || comboCategoria->Text == "")
    {
        MessageBox::Show("Complete todos los campos.");
        return;
    }

    // Convertir datos desde .NET a std::string
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

    // Buscar la categoría seleccionada
    for (auto c : categorias)
    {
        if (c->nombre == categoriaStr)
        {
            c->productos.push_back(Producto(nombre, precio));
            break;
        }
    }

    MessageBox::Show("Producto agregado correctamente.");
}
