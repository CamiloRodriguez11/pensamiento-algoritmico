#include <iostream>
using namespace std;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: División por cero." << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> op;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    double resultado;

   if (op == '+') {
        resultado = suma(num1, num2);
    } else if (op == '-') {
        resultado = resta(num1, num2);
    } else if (op == '*') {
        resultado = multiplicacion(num1, num2);
    } else if (op == '/') {
        resultado = division(num1, num2);
    } else {
        cout << "Operación no válida." << endl;
        return 1;
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
