#include <iostream>
using namespace std;
int a , b;
int main() {

  std::cout << "Ingrese el primer numero ";
  std::cin >> a;
  std::cout << "Ingrese el segundo numero ";
  std::cin >> b;
  std::cout << "La suma es : " << a+b << std::endl;
  std::cout << "La resta es : " << a-b << std::endl;
  std::cout << "La multiplicacion es : " << a*b << std::endl;
  std::cout << "La division es : " << a/b << std::endl;
  std::cout << "El cociente de la division es : " << a%b << std::endl;
  return 0;
}
