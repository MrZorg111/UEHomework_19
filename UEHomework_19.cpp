#include <iostream>
#include <vector>

class Animal {
public:
    virtual void voice() {
        std::cout << " " << std::endl;
    }
};

class Dog : public Animal {
public:
    void voice() override {
        std::cout << "Dog: -Gaf!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void voice() override {
        std::cout << "Cat: -Meow" << std::endl;
    }
};

class Fish : public Animal {
public:
    void voice() override {
        std::cout << "Fish: -..." << std::endl;
    }
};
int main(){
    const int SIZE = 3;
    Animal* animals[SIZE];
    
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Fish();

    for (int i = 0; i < SIZE; i++) {
        animals[i]->voice();
    }
    
    return 0;
}
