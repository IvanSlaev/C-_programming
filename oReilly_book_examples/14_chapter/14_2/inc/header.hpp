#include <iostream>


#ifndef _HEADER_HPP
#define _HEADER_HPP

namespace booking_system {

	using namespace std;

	class pig;
	class hourse;
	class dog;

	int animals_count();

	class pig {
    private:
        static int count;
    public:
        pig();
        static int number_of_animals();
	};

    class hourse {
    private:
        static int count;
    public:
        hourse();
        static int number_of_animals();
    };

    class dog {
    private:
        static int count;
    public:
        dog();
        static int number_of_animals();
    };
}

#endif /* _HEADER_HPP */
