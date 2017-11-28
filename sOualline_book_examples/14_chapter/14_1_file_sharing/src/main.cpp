#include <iostream>

#include <file.hpp>

using namespace std;
using namespace sharing_file;

int main() {
    file_sharing_class_1 class_1;
    file_sharing_class_2 class_2;

    class_1.open_file();
    cout << is_the_file_in_use(class_1, class_2) << endl;
    class_1.close_file();
    cout << is_the_file_in_use(class_1, class_2) << endl;
    class_2.open_file();
    cout << is_the_file_in_use(class_1, class_2) << endl;
    class_2.close_file();
    cout << is_the_file_in_use(class_1, class_2) << endl;
}
