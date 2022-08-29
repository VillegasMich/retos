#include <iostream>
#include "Product.hpp"

// El usuario debe de tener un carrito, donde tener todos los productos, vectores?

int main() {
  Product p1(1, "manzana", 10.0f);
  //std::cout << p1.name << " " << p1.id << " " << p1.price << std::endl;
  p1.updatePrice(5.0f);
  //std::cout << p1.name << " " << p1.id << " " << p1.price << std::endl;
}