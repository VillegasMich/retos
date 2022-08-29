#include <iostream>
#include <math.h>

// Paso por valor
void f(int* a) {
    // Utiliza el puntero el cual es un valor que apunta a una variable
    std::cout << "Realizando suma..." << std::endl;
    std::cout << *a + 1 << std::endl;
}

int main() {
    int x = 5;
    int* pnt = &x;

    std::cout << "El valor de x es: " << x << std::endl;
    f(pnt);
    std::cout << "El valor de x es: " << x << std::endl;
}