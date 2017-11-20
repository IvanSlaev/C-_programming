#include <iostream>
#include "Animal.h"

namespace AnimalSystem {

	using namespace std;

    Animal::Animal(int age, string name) {
        this->age = age;
        this->name = name;
    }

    string Animal::ISoundLike() {
        return "bau";
    }
}
