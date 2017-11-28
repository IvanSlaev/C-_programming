#include <iostream>

#include <file.hpp>

namespace sharing_file {

    using namespace std;

    file_sharing_class_1::file_sharing_class_1() {
        flag = 0;
    }

    file_sharing_class_2::file_sharing_class_2() {
        flag = 0;
    }

    void file_sharing_class_1::open_file() {
        flag++;
    }

    void file_sharing_class_1::close_file() {
        flag--;
    }

    void file_sharing_class_2::open_file() {
        flag++;
    }

    void file_sharing_class_2::close_file() {
        flag--;
    }

    int is_the_file_in_use(file_sharing_class_1 class_1, file_sharing_class_2 class_2) {
        return ((class_1.flag == 0 && class_2.flag == 0) ? 0 : 1);
    }
}
