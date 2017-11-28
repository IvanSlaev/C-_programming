#include <iostream>

#include <header.hpp>

namespace booking_system {

    using namespace std;

    int pig::count = 0;
    int hourse::count = 0;
    int dog::count = 0;

    pig::pig() {
        count++;
    }

    hourse::hourse() {
        count++;
    }

    dog::dog() {
        count++;
    }

    int pig::number_of_animals() {
        return count;
    }

    int hourse::number_of_animals() {
        return count;
    }

    int dog::number_of_animals() {
        return count;
    }

    int animals_count() {
        return dog::number_of_animals() + hourse::number_of_animals() + dog::number_of_animals();
    }
}
