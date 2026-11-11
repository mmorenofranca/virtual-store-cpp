#ifndef TIENDA_H
#define TIENDA_H
#include<iostream>
#include<vector>
#include "inventario.h"
#include "carrito.h"
using std::cout;
using std::cin;
using std::endl;
using std::vector;
class Tienda
{
    private:
    string nombre;
    Inventario i;
    Carrito c;
    public:
    void mostrar_menu();
    void realizar_compra();
    int cantidad_a_comprar();
    int selecciona_opcion();
    void opcion_volver();
};
#endif