#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include "inventario.h"
#include "producto.h"
using std::cout;
using std::ifstream;
using std::stringstream;
using std::endl;
void Inventario::cargar_archivo()
{
    ifstream archivo;
    archivo.open("inventario.csv");
    string linea,id,nombre,sprecio,sstock;
    while(getline(archivo,linea))
    {
        stringstream split(linea);
        getline(split,id,',');
        getline(split,nombre,',');
        getline(split,sprecio,',');
        getline(split,sstock,',');
        float p=stof(sprecio);
        int s=stoi(sstock);
        productos.push_back(Producto(id,nombre,p,s));
    }
}
void Inventario::actualizar_stock(int i,int n)
{
    int existentes= productos[i].dar_stock();
    if(existentes<n)
        cout<<"No hay stock suficiente de "<<productos[i].dar_nombre()<<endl;
    else
        productos[i].cambiar_stock(n);
}
int Inventario::dar_tamaño()
{
    int tmn=productos.size();
    return tmn;
}
Producto Inventario::dar_producto(int i)
{
    return productos[i];
}
void Inventario::imprimir()
{
    cout<<"*Inventario*"<<endl;
    for(int i = 0;i<dar_tamaño();i++)
    {
        cout<<i<<"   ";
        productos[i].imprimir();
    }
}