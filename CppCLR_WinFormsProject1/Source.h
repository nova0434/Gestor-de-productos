#pragma once
#include <vector>
#include <string>

// -----------------------------
// ESTRUCTURAS DE PRODUCTO Y CATEGORÍA
// -----------------------------

struct Producto {
    std::string nombre;
    float precio;

    Producto(std::string n, float p) : nombre(n), precio(p) {}
};

struct Categoria {
    std::string nombre;
    std::vector<Producto> productos;

    Categoria(std::string n, std::initializer_list<Producto> p)
        : nombre(n), productos(p) {
    }
};

// -----------------------------
// LISTA GLOBAL DE CATEGORÍAS (GRAFO SIMPLE)
// -----------------------------

extern std::vector<Categoria*> categorias;

// -----------------------------
// ÁRBOL BINARIO DE BÚSQUEDA (BST)
// -----------------------------

struct NodoProducto {
    Producto dato;
    NodoProducto* izq;
    NodoProducto* der;

    NodoProducto(Producto p) : dato(p), izq(nullptr), der(nullptr) {}
};

extern NodoProducto* raiz;

void insertarEnArbol(NodoProducto*& raiz, Producto p);
NodoProducto* buscarEnArbol(NodoProducto* raiz, const std::string& nombre);

// ? ESTA ES LA LÍNEA QUE FALTABA ?
void inicializarArbolConCategorias();
