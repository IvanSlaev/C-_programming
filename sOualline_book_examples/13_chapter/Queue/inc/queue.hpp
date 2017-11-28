#include <iostream>

namespace QueueSystem {
#define QUEUE_SIZE 246

    using namespace std;


    class Queue {
    private:
        int container[QUEUE_SIZE];
        short size;
    public:
        Queue();
        void put(int);
        int get();
    };
}
