#include <iostream>
#include "ISound.h"

namespace AnimalSystem {

	using namespace std;

	class Animal : public ISound {
		protected:
			int age;
			string name;
		public:
            Animal(int, string);
            virtual string ISoundLike();
			static int get_count_of_animals(Animal *animal);
            template < typename T > static short get_avegare_age_by_type(Animal *animal);
	};
}
