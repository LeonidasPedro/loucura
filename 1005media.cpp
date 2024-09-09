#include <iostream>
#include <iomanip>


int main(){
	double a, b;
	double media;

	std::cin >> a;
	std::cin >> b;

	a = a * 3.5;
	b = b * 7.5;

	media = a + b;
	media = media / 11;

 	std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << std::endl;

	return 0;

}

