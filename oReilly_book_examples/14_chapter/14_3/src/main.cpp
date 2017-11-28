#include <iostream>

#include <header.hpp>

using namespace std;
using namespace mutex_class_system;

int main() {
    mutex_stack stack;
    mutex_stack stack_1;
    mutex_stack stack_2;
    mutex_stack stack_3;
    mutex_stack stack_4;

    stack.unlock();
    stack.lock();
    stack_1.unlock();
    stack_2.unlock();
    stack_3.unlock();
    stack_4.unlock();
    stack.unlock();
}
