#ifndef INVENTARIO_H
#define INVENTARIO_H
#include<iostream>
#include<vector>
#include "producto.h"
using std::vector;
class Inventario
{
    private:
    vector<Producto> productos;
    public:
    void cargar_archivo();
    int dar_tamaño();
    Producto dar_producto(int i);
    void actualizar_stock(int i, int n);
    void imprimir();
};
#endif