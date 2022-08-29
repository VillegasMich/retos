#include <iostream>


class Animal {
     protected:
        std::string name;
        int legs;
        Animal(int legs) {
            this->legs = legs;
        }
        Animal() {}
    public:
        void walk() {
            std::cout << "the animal is now walking" << std::endl;
        }
        virtual void eat() = 0;
};

class Pet {
    public:
        virtual std::string getName() = 0;
        virtual void setName(std::string name) = 0;
        virtual void play() = 0;
};

class Spider: public Animal {
    public:
        Spider() {
            std::cout << "A new spider was born\n"; 
        }
    
        void eat() {
            std::cout << "The spider is eating...\n"; 
        }
};

class Cat: public Animal, public Pet {
    public:
        Cat(std::string name) {
            this->name = name;
            std::cout << "A new cat was born with the name of " << name << std::endl;
        }

        Cat() {
            std::cout << "A new cat was born\n" << std::endl;
        }

        std::string getName() {
            return this->name;
        }

        void setName(std::string name) {
            this->name = name;
            std::cout << "The new name of the cat is: " << name << std::endl;
        }

        void play() {
            std::cout << "the cat " << this->name << " is playing"<< std::endl;
        }

        void eat() {
            std::cout << "The cat is eating" << std::endl;
        }
};

class Fish: public Animal, public Pet {
    public:
        Fish() {
            std::cout << "A new fish was created" << std::endl;
        }

        std::string getName() {
            return this->name;
        }

        void setName(std::string name) {
            this->name = name;
            std::cout << "The new name of the fish is: " << name << std::endl;
        }

        void play() {
            std::cout << "the fish is playing"<< std::endl;
        }

        void eat() {
            std::cout << "The fish is eating" << std::endl;
        }

        void walk() {
            std::cout << "hey bro, i can't walk" << std::endl;
        }

};

int main() {
    //* SPIDER
    Spider spider1;
    spider1.eat();
    spider1.walk();

    std::cout << "-----------------------------" << std::endl;


    //* CAT
    Cat cat1("Filipo");
    cat1.getName();
    cat1.setName("Pepito");
    cat1.eat();
    cat1.play();
    cat1.walk();

    std::cout << "-----------------------------" << std::endl;

    //* FISH
    Fish fish1;
    fish1.getName();
    fish1.setName("Jean");
    fish1.eat();
    fish1.play();
    fish1.walk();


    std::cout << "End of program" << std::endl;
}