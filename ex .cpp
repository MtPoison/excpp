#include <cstdlib>
#include <ctime>
#include <iostream>

class Airectangle
{
public:
	int width;
	int heigth;

	int caculAir() {
		return width * heigth;
	}
};


int main()
{
	/*std::srand(std::time(nullptr));
	int rand_number = std::rand();
	int foo = 0;
	int i = 20;

	while(i >= 0){

		std::cout << "Choisie un chiffre" << std::endl;
		std::cin >> foo;
		if (rand_number > foo) {
			std::cout << "le chiffre rand est plus grand" << std::endl;
		}
		if (rand_number < foo) {
			std::cout << "le chiffre rand est plus petit" << std::endl;
		}
		if (rand_number == foo) {
			std::cout << "gg c'est gagner" << std::endl;
		}
		if(i == 0) {
			std::cout << "c'est perdu, rand = " << rand_number << std::endl;
		}

		i--;
	}*/

	Airectangle rect;
	rect.width = 30;
	rect.heigth = 40;

	std::cout << "Rectangle area: " << rect.caculAir() << std::endl;

	return 0;
	
}
