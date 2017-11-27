#include <iostream>


#ifndef _PARITY_HPP
#define _PARITY_HPP

namespace parity_system {

	using namespace std;

	class parity {
		protected:
			int counter;
		public:
			parity();
            void put(void);
            int test(void);
	};
}

#endif /* _PARITY_HPP */
