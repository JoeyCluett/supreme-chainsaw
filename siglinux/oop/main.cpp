#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
public:
    string name;
    Animal(string name) : name(name) {}

    // pure virtual function
    virtual string eat(void) = 0;
};

class Mammal : public Animal {
public:
    Mammal(string name) : Animal(name) {}

    virtual string eat(void) override {
        return "Eating leaves...";
    }

};

class Dog : public Mammal {
public:
    string sound;
    Dog(string name, string sound) : Mammal(name), sound(sound) {}

    string eat(void) override {
        return "Eating rabbits...";
    }

};

void say_name(Animal* a) {
    cout << a->name << endl;
}

int main(void) {

    vector<Animal*> av;
    av.push_back(new Mammal("Mammal"));
    av.push_back(new Dog("Fido", "Woof"));

    for(auto a : av) {
        cout << a->name << " is " << a->eat() << endl;
    }

    return 0;
}

