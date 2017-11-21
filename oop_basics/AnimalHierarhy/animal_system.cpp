#include <iostream>

#include "dog.hpp"
#include "cat.hpp"

using namespace std;
using namespace AnimalSystem;

int main() {
    Dog dog = Dog(2, "doggy");
    Cat cat = Cat(2, "kitty");

    cout << dog.ISoundLike() << endl;
    cout << cat.ISoundLike() << endl;
}
