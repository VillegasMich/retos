#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 2;
    int b = 3;

    int* pntA = &a;
    int* pntB = &b;

    std::cout << "El valor actual de a es: " << a << std::endl;
    std::cout << "El valor actual de b es: " << b << std::endl;
    swap(pntA, pntB);
    std::cout << "El valor despues de la funcion en a es: " << a << std::endl;
    std::cout << "El valor despues de la funcion en b es: " << b << std::endl;
}