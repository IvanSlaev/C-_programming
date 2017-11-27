#include <iostream>

#include <checkbook.hpp>

using namespace std;
using namespace Checkbook_system;

int main() {
    Checkbook check_book;

    cout << "Checkbook must be empty: " << check_book.total() << endl;
    check_book.add_item(1);
    check_book.add_item(2);
    cout << "Checkbook total must be 3: " << check_book.total() << endl;
}
