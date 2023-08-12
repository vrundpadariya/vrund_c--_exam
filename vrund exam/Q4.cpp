//Write a Program which illustrates Method Overriding by using three classes.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *animal1 = new Animal();
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    animal1->speak(); 
    dog->speak();     
    cat->speak();     

    delete animal1;
    delete dog;
    delete cat;

    return 0;
}

