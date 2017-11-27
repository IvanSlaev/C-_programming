#include <iostream>

#include <queue.hpp>

namespace QueueSystem {

    using namespace std;

    Queue::Queue() {
        this->size = 0;
    }

    void Queue::put(int item) {
        this->size++;
        this->container[size - 1] = item;
    }

    int Queue::get() {
        int result;

        result = this->container[0];

        for (int i = 0; i < size; ++i) {
            this->container[i] = this->container[i + 1];
        }

        size--;
        return result;
    }
}
