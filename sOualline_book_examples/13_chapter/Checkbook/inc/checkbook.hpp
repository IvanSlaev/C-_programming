#include <iostream>

namespace Checkbook_system {

    using namespace std;

    class Checkbook {
    private:
        int container;
    public:
        Checkbook();
        void add_item(int);
        int total();
    };
}
