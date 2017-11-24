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
			static string get_sound_of_any_animal(Animal *);
	};
}

#endif /* _ANIMAL_HPP */
