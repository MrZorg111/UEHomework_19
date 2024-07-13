#include <iostream>
#include <vector>

/*
Создайте класс Animal с публичным методом Voice(), который выводит в консоль строку с текстом.                                  ГОТОВО

Наследуйте от Animal минимум три класса (к примеру Dog, Cat и т. д.) и в них перегрузите метод Voice() таким образом, 
чтобы для примера в классе Dog метод Voice() выводилось Woof! в консоль.                                                        ГОТОВО!

В функции main создайте массив указателей типа Animal и заполните этот массив объектами созданных классов.

Затем пройдитесь циклом по массиву, вызывая на каждом элементе массива метод Voice().
Протестируйте его работу. Должны выводиться сообщения из ваших классов-наследников Animal.
*/

class Animal {
public:
    void voice() {
        std::cout << "NONONO" << std::endl;
    }
};

class Dog: public Animal {
public:
    void voice() {
        std::cout << "Dog: -Gaf!" << std::endl;
    }
};

class Cat: public Animal {
public:
    void voice() {
        std::cout << "Cat: -Meow" << std::endl;
    }
};

class Fish: public Animal {
public:
    void voice() {
        std::cout << "Fish: -..." << std::endl;
    }
};
int main(){
    
    Dog dog;
    Cat cat;
    Fish fish;

    Animal* animals = new Animal[3];

    animals[0] = dog;
    animals[1] = cat;
    animals[2] = fish;

    for (int i = 0; i < 3; i++) {
       animals[i].voice();
    }
   
    return 0;
}
