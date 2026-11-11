#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<iostream>
#include<string>
using std::string;
class Producto
{
    private:
    string id;
    string nombre;
    float precio;
    int num_existencia;
    public:
    Producto();
    Producto(string i,string n,float p,int num);
    string dar_nombre();
    float dar_precio();
    int dar_stock();
    void cambiar_stock(int s);
    void cambiar_precio(float p);
    void imprimir();
};
#endif