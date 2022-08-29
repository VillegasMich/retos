#include "Product.hpp"
#include <chrono>
#include <iomanip>
#include <iostream>

Product::Product(int id, std::string name, float price): id(id), name(name), price(price) {
    this->priceHistory = {{ std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()), price }};
}

void Product::updatePrice(float newPrice) {
    this->price = newPrice;

    const time_t updateTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    this->priceHistory.insert({ updateTime, newPrice });

    std::cout << "The price of " << this->name <<  " was updated to " << newPrice << '\n';
    std::cout << "Update time: " << std::put_time(std::localtime(&updateTime), "%F %T.") << '\n';
}

