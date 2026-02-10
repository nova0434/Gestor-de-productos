#include "pch.h"
#include "Source.h"

// -----------------------------
// LISTA GLOBAL DE CATEGORÍAS
// -----------------------------

std::vector<Categoria*> categorias = {

    new Categoria("Lácteos", {
        {"Leche", 1.50f},
        {"Queso", 3.20f},
        {"Yogurt", 1.10f}
    }),

    new Categoria("Frutas", {
        {"Manzana", 0.50f},
        {"Banana", 0.30f},
        {"Pera", 0.45f}
    }),

    new Categoria("Limpieza", {
        {"Detergente", 2.50f},
        {"Lavandina", 1.80f},
        {"Jabón", 1.20f}
    }),

    new Categoria("Carnes", {
        {"Pollo", 4.50f},
        {"Carne Molida", 5.20f},
        {"Chuleta", 6.00f}
    }),

    new Categoria("Bebidas", {
        {"Coca-Cola", 1.20f},
        {"Agua", 0.80f},
        {"Jugo", 1.00f}
    }),

    new Categoria("Panadería", {
        {"Pan", 0.40f},
        {"Croissant", 0.90f},
        {"Bollos", 0.70f}
    }),

    new Categoria("Verduras", {
        {"Lechuga", 0.90f},
        {"Tomate", 0.70f},
        {"Zanahoria", 0.60f}
    }),

    new Categoria("Snacks", {
        {"Papas Fritas", 1.20f},
        {"Galletas", 1.00f},
        {"Chocolate", 1.50f}
    }),

    new Categoria("Higiene Personal", {
        {"Shampoo", 2.00f},
        {"Jabón Líquido", 1.50f},
        {"Desodorante", 2.20f}
    }),

    new Categoria("Mascotas", {
        {"Croquetas", 3.50f},
        {"Snacks Perro", 2.00f},
        {"Arena Gato", 4.00f}
    })
};

// -----------------------------
// ÁRBOL BINARIO DE BÚSQUEDA
// -----------------------------

NodoProducto* raiz = nullptr;

void insertarEnArbol(NodoProducto*& raiz, Producto p)
{
    if (raiz == nullptr)
    {
        raiz = new NodoProducto(p);
        return;
    }

    if (p.nombre < raiz->dato.nombre)
        insertarEnArbol(raiz->izq, p);
    else
        insertarEnArbol(raiz->der, p);
}

NodoProducto* buscarEnArbol(NodoProducto* raiz, const std::string& nombre)
{
    if (raiz == nullptr)
        return nullptr;

    if (nombre == raiz->dato.nombre)
        return raiz;

    if (nombre < raiz->dato.nombre)
        return buscarEnArbol(raiz->izq, nombre);
    else
        return buscarEnArbol(raiz->der, nombre);
}

// -----------------------------
// INICIALIZAR ÁRBOL CON PRODUCTOS INICIALES
// -----------------------------

void inicializarArbolConCategorias()
{
    for (auto c : categorias)
    {
        for (auto& p : c->productos)
        {
            insertarEnArbol(raiz, p);
        }
    }
}
