#include <iostream>

#include <parity.hpp>

using namespace std;
using namespace parity_system;

int main() {
    parity parity_inst;

    cout << "No call to put (even return 1), result: " << parity_inst.test() << endl;
    parity_inst.put();
    cout << "First call to put(odd return 0), result: " << parity_inst.test() << endl;
    parity_inst.put();
    cout << "Second call to put(even return 1), result: " << parity_inst.test() << endl;
}
