#include <iostream>

#include <header.hpp>

using namespace std;
using namespace booking_system;

int main() {
    cout << "One of all kind: " << animals_count() << endl;

    pig pig_inst_1;
    hourse hourse_inst_1;
    dog dog_inst_1;

    cout << "One of all kind: " << animals_count() << endl;

    pig pig_inst_2;
    hourse hourse_inst_2;
    dog dog_inst_2;

    cout << "One more of a kind: " << animals_count() << endl;
}
