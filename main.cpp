#include<iostream>
#include<string>
#include "producto.h"
#include "carrito.h"
#include "inventario.h"
#include "tienda.h"
using std::string;
using std::cout;
using std::endl;

int main()
{
    Tienda t;
    t.mostrar_menu();
    return 0;
}