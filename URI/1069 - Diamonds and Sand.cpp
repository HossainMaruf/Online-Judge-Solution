#include <iostream>

int main() {	

	int t, problem_count = 0, total_sign = 0;
	bool flag;
	std::string exp;

	std::cin >> t;
	while(t--) {
		std::cin >> exp;
		int i, j, k;
		for(i=0,j=0,k=0; i<exp.length(); i++) {
			if(exp[i] == '<') {
				j++;
			}
			if(exp[i] == '>') {
				if(j > 0) {
					j--;
					k++;
				}
			}
		}
		std::cout << k << std::endl;
	}

	return 0;
}