#include<iostream>
#include<vector>
#include "tienda.h"
#include "inventario.h"
#include "carrito.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;
void Tienda::mostrar_menu()
{
    i.cargar_archivo();
    while(true)
    {
        cout<<"--- MENÚ PRINCIPAL ---"<<endl;
        cout<<"1. Seleccionar producto"<<endl;
        cout<<"2. Ver carrito de compras"<<endl;
        cout<<"3. Terminar compra"<<endl;
        cout<<"4. Salir"<<endl;
        int eleccion=selecciona_opcion();
        if(eleccion==1)    
            realizar_compra();
        else if(eleccion==2)
        {    
            c.imprimir();
            opcion_volver();
        }
        else if(eleccion==3)   
        {
            c.calcular_total();
            opcion_volver();
        }
        else if(eleccion==4)
            return;
    }
    
}
int Tienda::selecciona_opcion()
{
    int opcion;
    cout<<"Selecciona opción: ";
    cin>>opcion;
    return opcion;
}
int Tienda::cantidad_a_comprar()
{
    int cantidad;
    cout<<"¿Cuántas unidades desea adquirir? (Teclea el número de unidades que desees) ";
    cin>>cantidad;
    return cantidad;        
}
void Tienda::realizar_compra()
{
    int num_producto;
    i.imprimir();
    cout<<"¿Qué producto deseas comprar? (Teclea el número del producto que desees) ";
    cin>>num_producto;
    if(num_producto==-1 || num_producto>i.dar_tamaño()-1)
    {
        cout<<"No se pudo realizar la compra"<<endl;
        return;
    }
    int cantidad=cantidad_a_comprar();
    if(cantidad<=0 || cantidad>i.dar_producto(num_producto).dar_stock())
    {
        cout<<"No se pudo realizar la compra"<<endl;
        return;
    }
    else
    {    
        i.actualizar_stock(num_producto,cantidad);
        c.agregar_producto(i.dar_producto(num_producto),cantidad);
    }
}
void Tienda::opcion_volver()
{
    int opcion=0;
    while(opcion!=1)
    {    
        cout<<"Presiona 1 Para Volver Al Menú: ";  
        cin>>opcion;
    }
    return;
}