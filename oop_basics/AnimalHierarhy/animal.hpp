#include <iostream>


#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

namespace AnimalSystem {

	using namespace std;

	class Animal {
		protected:
			int age;
			string name;
		public:
            virtual string ISoundLike() = 0;
			static int get_count_of_animals(Animal *animal);
            template < typename T > static short get_avegare_age_by_type(Animal *animal);
	};
}

#endif /* _ANIMAL_HPP */
