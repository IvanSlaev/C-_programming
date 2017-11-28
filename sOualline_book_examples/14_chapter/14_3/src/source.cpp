#include <iostream>

#include <header.hpp>

namespace mutex_class_system {

    using namespace std;

    int mutex_stack::mutex = 0;
    mutex_stack *mutex_stack::current_locker = NULL;

    void mutex_stack::lock() {
        current_locker = this;
        mutex++;
    }

    void mutex_stack::unlock() {
        if (NULL == current_locker) {
            cout << "No one lock the mutex yet" << endl;
        } else if (this != current_locker) {
            cout << "Sorry but you are not able to lock the mutex" << endl;
        } else {
            cout << "Hello locker, you are going to unlock the mutex" << endl;
            mutex--;
        }

        return;
    }
}
