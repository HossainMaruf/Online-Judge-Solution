#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <vector>

struct comp {
	bool operator () (const std::pair<char,int>& m1, const std::pair<char,int>& m2) {
		if(m1.second == m2.second) return m1.first < m2.first;
		return m1.second > m2.second;
	}
};


int main(int param, char** argv) {	

	int t;
	std::string text;
	std::cin >> t;
	std::cin.ignore();

	while(t--) {
		std::vector<std::pair<char,int>> v(1<<5,{'0',0});
		std::getline(std::cin, text);
		for(int i=0; text[i] != '\0'; i++) {
			if((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122)) {
				// letter found
				int index = tolower(text[i]) - 97;
				v[index] = {tolower(text[i]), ++(v[index].second)};

			}
		}
		std::sort(v.begin(),v.end(),comp());

		for(int i=0; v[i].second != 0; i++) {
			std::cout << v[i].first;
			if(v[i].second != v[i+1].second) break;
		}
		std::cout<<"\n";
	}

	return 0;
}