#include <iostream>
#include <cat.hpp>

namespace AnimalSystem {

    using namespace std;

    Cat::Cat(int age, string name) {
        this->age = age;
        this->name = name;
    }

    int Cat::get_age() {
        return age;
    }

    string Animal::get_sound_of_any_animal(Animal *animal) {
        return animal->ISoundLike();
    }

    string Cat::ISoundLike() {
        return "mau";
    }
}
