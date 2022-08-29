#pragma once
#include <unordered_map>
#include <ctime>

class Product {
public:
  int id;
  std::string name;
  float price;
  std::unordered_map<std::time_t, float> priceHistory;

public:
  Product(int id, std::string name, float price);
  void updatePrice(float newPrice);

};