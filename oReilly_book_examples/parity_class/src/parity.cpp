#include <iostream>

#include <parity.hpp>

namespace ParitySystem {

    using namespace std;

    Parity::Parity() {
        this->counter = 0;
    }

    void Parity::put() {
        this->counter++;
    }

    int Parity::test() {
        return this->counter % 2 == 1 ? 0 : 1;
    }
}
