#include <iostream>

void sumaArr(int arr[5]) {
    int result = 0;
    for (int i = 0; i < 5; i++) {
        result += *(arr + i);
    }
    std::cout << result << std::endl;
}

int promedio(int numeros[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numeros[i];
    }
    int prom = sum/size;
    return prom;
}

void crearArr() {
    int size;
    std::cout << "Ingrese el size del arreglo: ";
    std::cin >> size;
    int* numeros = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Ingrese el número " << i << " para su arreglo" << std::endl;
        std::cin >> numeros[i];
    }

    std::cout << "El promedio es: " << promedio(numeros, size) << std::endl;
    delete[] numeros;
}

int main() {
/*
    int a = 2;
    int* pnt = &a;
    int arr[5] = {1,2,3,4,5};

    sumaArr(arr);
*/
    crearArr();

}