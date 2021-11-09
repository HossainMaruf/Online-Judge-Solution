#include <iostream>
#include <cctype>

int main() {

	int t, len;
	std::string text;
	std::cin >> t;
	std::cin.ignore();
	while(t--) {
		std::getline(std::cin, text);
		if(text[0] != ' ') std::cout << text[0];
		len = text.size();
		for(int i=1; i<len; ++i) {
			if(isalpha(text[i]) && isspace(text[i-1])) std::cout << text[i];
		}
		std::cout << std::endl;
	}
	
	return 0;
}