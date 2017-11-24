#include <iostream>
#include <animal.hpp>

namespace AnimalSystem {

    using namespace std;

    class Cat : public Animal {
        public:
            Cat(int, string);
            int get_age();
            virtual string ISoundLike();
    };
}
