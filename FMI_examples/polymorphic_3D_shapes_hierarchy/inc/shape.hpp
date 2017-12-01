#include <iostream>

namespace shape_system {

    using namespace std;

    class shape {
    protected:
        int mass_center;
    public:
        int volume(shape &);
        int total();
    };
}
