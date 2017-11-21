#include <iostream>
#include "animal.hpp"

namespace AnimalSystem {

    using namespace std;

    class Cat : protected Animal {
        public:
            Cat(int, string);
            virtual string ISoundLike();
    };
}
