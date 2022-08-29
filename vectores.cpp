#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "tamaño del vector: ";
    std::cin >> size;
    std::vector<int> numeros(size, 0);
    
    for (int &num : numeros) {
        std::cout << "Ingrese el número: ";
        std::cin >> num;
    }
    
    int sum = 0;
    for (int num : numeros) {
        sum += num;
    }

    double promedio = (double)sum/(double)numeros.size();
    std::cout << "El promedio es: " << promedio << std::endl;

}