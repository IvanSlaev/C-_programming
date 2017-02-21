namespace AnimalSystem {
	#include "cpplinq.hpp"

	public class Animal : public ISound {
		protected:
			int age;
			int name;
			SexEnum sex;

		public:
			virtual ISoundLike;
			template <typename T>
			static string GetAvegareAgeByType(Animal[] animals) {
				int sum = from_array(animals) >> select([](Animal animal){ return animal.age }) >> sum();
				int count = sizeof(animals)/sizeof(animals[0])
			}	
}
