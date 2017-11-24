#include <iostream>


#ifndef _PARITY_HPP
#define _PARITY_HPP

namespace ParitySystem {

	using namespace std;

	class Parity {
		protected:
			int counter;
		public:
			Parity();
            void put(void);
            int test(void);
	};
}

#endif /* _PARITY_HPP */
