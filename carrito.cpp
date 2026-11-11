#include<iostream>
#include<vector>
#include "producto.h"
#include "carrito.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;
void Carrito::agregar_producto(Producto p,int n)
{
    compras.push_back(p);
    cantidades.push_back(n);
}
void Carrito::calcular_total()
{
    int tmn=compras.size();
    float total=0;
    for(int i = 0;i<tmn;i++)
    {
        float gasto=cantidades[i]*compras[i].dar_precio();
        total+=gasto;
    }
    cout<<"--------------------------------------"<<endl;
    cout<<"- El total de tu compra es: $"<<total<<" -"<<endl;
    cout<<"Gracias por comprar en MiTiendita.com"<<endl;
    cout<<"--------------------------------------"<<endl;
}
void Carrito::imprimir()
{
    cout<<"****** TU CARRITO ******"<<endl;
    int tmn=compras.size();
    for(int i = 0;i<tmn;i++)
    {
        cout<<cantidades[i]<<" ";
        cout<<compras[i].dar_nombre()<<" ";
        cout<<compras[i].dar_precio()<<endl;
    }
    cout<<"*************************"<<endl;
}

