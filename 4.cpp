#include <iostream>
class Shape {
    std::string color;

public:
    double getArea();
};

class Rectangle: public Shape {
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        this->length = l;
        this->width = w;
    }

    double getArea() {
        return this->length*this->width;
    }
};

class Triangle: public Shape {

    int length;
    int width;

public:
    Triangle(int l, int w) {
        this->length = l;
        this->width = w;
    }

    double getArea() {
        return (this->length*this->width)/2;
    }
};

int main() {

    Rectangle r1(2,2);
    std::cout << "El area del cuadrado es: " << r1.getArea() << std::endl;

    Triangle t1(3,2);
    std::cout << "El area del triangulo es: " << t1.getArea() << std::endl;

}