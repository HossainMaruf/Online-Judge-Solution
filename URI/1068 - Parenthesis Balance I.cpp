#include <iostream>

int main() {
	int count;
	bool flag;
	std::string exp;
	while(std::cin >> exp) {
		flag = true;
		count = 0;
		for(int i=0; i<exp.length(); i++) {
			if(exp[i] == '(') {
				flag = true;
				count++;
			}
			if(exp[i] == ')') {
				if(count == 0) flag = false;
				if(flag) count--;
				else count++;
			}
		}
		if(count == 0) std::cout << "correct" << std::endl;
		else std::cout << "incorrect" << std::endl;
	}

	return 0;
}