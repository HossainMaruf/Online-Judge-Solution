#include <iostream>
#include <vector>

int main() {

	int n;
	while((std::cin >> n) && (n != 0)) {
		std::vector<int> v;
		int peek = 0, num;
		bool up = false, down = false;
		for(int i=0; i<n; i++) {
			std::cin >> num;
			v.push_back(num);
		}
		v.push_back(v[0]);
		v.push_back(v[1]);
		if(v[0] < v[1]) up = true;
		else down = true;
		for(int i=0; i<v.size()-1; i++) {
			if(up && (v[i] > v[i+1])) {
				up = false;
				down = true;
				peek++;
				continue;
			}
			if(down && (v[i] < v[i+1])) {
				up = true;
				down = false;
				peek++;
			}
		}
		std::cout << peek << std::endl;
	}

	return 0;
}