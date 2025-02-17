#include <iostream>
using namespace std;

int main() {
    int articulo;
    std::cout<< "Ingrese el precio de su articulo: ";
    std::cin >> articulo;
    int descuento = articulo * 0.15 ;
    int total = articulo - descuento;
    std::cout<< "El descuento de su articulo es: " << descuento << std::endl ;
    std::cout<< "El valor total de su articulo es: "<< total<< std::endl;

  return 0;
}
