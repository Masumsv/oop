#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() const {
        cout << "Animal makes a sound" << endl;
    }

    virtual void specialSkill() const {
        cout << "Animal has a special skill" << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Dog says: hop hop!" << endl;
    }

    void specialSkill() const override {
        cout << "Dog fetches the ball!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Cat says: Meow!" << endl;
    }

    void specialSkill() const override {
        cout << "Cat climbs the tree!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    cout << "Dog:" << endl;
    a1->makeSound();
    a1->specialSkill();

    cout << "\nCat:" << endl;
    a2->makeSound();
    a2->specialSkill();

    delete a1;
    delete a2;

    return 0;
}