#include <iostream>
#include "cat.hpp"


namespace AnimalSystem {

    using namespace std;

    Cat::Cat(int age, string name) {
        age = age;
        name = name;
    }

    string Cat::ISoundLike() {
        return "mau";
    }
}
