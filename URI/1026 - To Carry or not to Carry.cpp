#include <iostream>

int main() {

	unsigned int num1, num2, x, sum;

	while((std::cin >> num1 >> num2)) {
		std::cout << (num1 ^ num2) << std::endl;
	}

	return 0;
}