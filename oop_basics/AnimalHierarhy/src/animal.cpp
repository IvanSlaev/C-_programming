#include <iostream>
#include <animal.hpp>

namespace AnimalSystem {

    using namespace std;

    string Animal::get_sound_of_any_animal(Animal *animal) {
        return animal->ISoundLike();
    }
}
