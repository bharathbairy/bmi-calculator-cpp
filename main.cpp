#include <iostream>
#include "Header.hpp"

#define PRINT std::cout
#define INPUT std::cin
void repeat();

int main()
{
	PRINT << "**** BMI CALCULATOR ****\n" << std::endl;
	repeat();
	return 0;
}

void repeat() {
	float weight, height;
	std::string j;
	bool flag = true;
	while (flag)
	{
		PRINT << "Enter your weight in KG: ";
		INPUT >> weight;
		PRINT << "Enter your height in CM or M: ";
		INPUT >> height;

		PRINT <<" \n" << to_string(get_bmi(weight, height)) << std::endl;
		PRINT << "\nWanna try again? type 'q' to quit: ";
		std::cin >> j;
		PRINT << std::endl;
		
		if (j == "q" || j == "Q") {
			flag = false;
		}
		else if (j == "") {
			flag = true;
		}
		else {
			flag = true;
		}
	}
}