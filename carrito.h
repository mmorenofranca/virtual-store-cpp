#ifndef CARRITO_H
#define CARRITO_H
#include<iostream>
#include<vector>
#include "producto.h"
using std::vector;
class Carrito
{
    private:
    vector<Producto> compras;
    vector<int> cantidades;
    public:
    void calcular_total();
    void agregar_producto(Producto p,int n);
    void imprimir();
};
#endif