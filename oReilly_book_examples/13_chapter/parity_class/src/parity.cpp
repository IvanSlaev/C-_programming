#include <iostream>

#include <parity.hpp>

namespace parity_system {

    using namespace std;

    parity::parity() {
        this->counter = 0;
    }

    void parity::put() {
        this->counter++;
    }

    int parity::test() {
        return this->counter % 2 == 1 ? 0 : 1;
    }
}
