#include <iostream>

int main(int param, char** argv) {	

	int t, leds, need_led[] = {6,2,5,5,4,5,6,3,7,6};
	std::string number;
	std::cin >> t;
	while(t--) {
		leds = 0;
		std::cin >> number;
		for(int i=0; number[i] != '\0'; i++) {
			leds += need_led[number[i] - 48];
		}
		std::cout << leds << " leds" << std::endl;
	}

	return 0;
}