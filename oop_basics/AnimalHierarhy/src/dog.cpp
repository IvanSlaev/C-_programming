#include <iostream>
#include <dog.hpp>


namespace AnimalSystem {

	using namespace std;

	Dog::Dog(int age, string name) {
	    age = age;
	    name = name;
	}

	string Dog::ISoundLike() {
	    return "bau";
	}
}
