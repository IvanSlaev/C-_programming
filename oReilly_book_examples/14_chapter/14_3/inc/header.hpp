#include <iostream>


#ifndef _HEADER_HPP
#define _HEADER_HPP

namespace mutex_class_system {

	using namespace std;

	class mutex_stack {
    private:
        static int mutex;
        static int stack[32];
        static mutex_stack *current_locker;
    public:
        void lock();
        void unlock();
	};
}

#endif /* _HEADER_HPP */
