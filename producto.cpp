#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include "producto.h"
using std::cout;
using std::string;
using std::ifstream;
using std::stringstream;
using std::endl;
Producto::Producto()
{
    id="";
    nombre="";
    precio=0;
    num_existencia=0;
}
Producto::Producto(string i,string n,float p,int num)
{
    id=i;
    nombre=n;
    precio=p;
    num_existencia=num;
}
string Producto::dar_nombre()
{
    return nombre;
}
float Producto::dar_precio()
{
    return precio;
}
int Producto::dar_stock()
{
    return num_existencia;
}
void Producto::cambiar_stock(int s)
{
    this->num_existencia-=s;
}
void Producto::cambiar_precio(float p)
{
    this->precio=p;
}
void Producto::imprimir()
{
    cout<<"ID: "<<id<<" - ";
    cout<<"Nombre: "<<nombre<<" - ";
    cout<<"Precio: "<<precio<<" - ";
    cout<<"Stock: "<<num_existencia<<endl;
}