#include <iostream>

#include <queue.hpp>

using namespace std;
using namespace QueueSystem;

int main() {
    Queue a_queue;

    a_queue.put(1);
    a_queue.put(2);
    a_queue.put(3);
    cout << "Must return 1: " << a_queue.get() << endl;
    cout << "Must return 2: " << a_queue.get() << endl;
}
