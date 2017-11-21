#include <iostream>
#include "animal.hpp"

namespace AnimalSystem {

    using namespace std;

    class Dog : protected Animal {
        public:
            Dog(int, string);
            virtual string ISoundLike();
	};
}
