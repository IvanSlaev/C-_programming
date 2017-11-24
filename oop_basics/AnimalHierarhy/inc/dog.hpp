#include <iostream>
#include <animal.hpp>

namespace AnimalSystem {

    using namespace std;

    class Dog : public Animal {
        public:
            Dog(int, string);
            virtual string ISoundLike();
	};
}
