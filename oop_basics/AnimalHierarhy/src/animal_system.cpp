#include <iostream>

#include <dog.hpp>
#include <cat.hpp>

using namespace std;
using namespace AnimalSystem;

int main() {
    Dog dog = Dog(1, "doggy");
    Cat cat = Cat(2, "kitty");

    cout << "Cat's age is: " << cat.get_age() << endl;

    cout << "What does the dog says? - " << Animal::get_sound_of_any_animal(&dog) << endl;
    cout << "What does the cat says? - " << Animal::get_sound_of_any_animal(&cat) << endl;
}
