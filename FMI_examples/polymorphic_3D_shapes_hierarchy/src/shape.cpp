#include "../inc/shape.hpp"

#include <iostream>


namespace Checkbook_system {

    using namespace std;

    Checkbook::Checkbook() {
        this->container = 0;
    }

    void Checkbook::add_item(int amount) {
        this->container += amount;
    }

    int Checkbook::total() {
        return this->container;
    }
}
