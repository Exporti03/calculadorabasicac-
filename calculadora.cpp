#include <iostream>


int main() {

    double numero1;
    double numero2;
    double resultado;
    char op;

    std::cout << "#####CALCULADORA BASICA######\n";


    std::cout << "Ingrese + - * /: ";
    std::cin >> op;

    std::cout << "Ingrese numero 1: ";
    std::cin >> numero1; 

    std::cout << "Ingrese numero 2: ";
    std::cin >> numero2;

switch (op) {
    case '+':
        resultado = (numero1 + numero2);
        std::cout << "El resultado de la suma es: " << resultado << "\n";
        break;

    case '-':
        resultado = (numero1 - numero2);
        std::cout << "El resultado de la resta es: " << resultado << "\n";
        break;

    case '*':
        resultado = (numero1 * numero2);
        std::cout << "El resultado de la multiplicación es: " << resultado << "\n";
        break;

    case '/':
        if (numero2 == 0) {
            std::cout << "Error: No se puede dividir entre cero\n";
        } else {
            resultado = numero1 / numero2;
            std::cout << "El resultado de la división es: " << resultado << "\n";
        }
        break;

    default:
        std::cout << "Opción no válida\n";
        break; // Aunque no es necesario en el `default`, por convención se agrega
}



    return 0;
}
