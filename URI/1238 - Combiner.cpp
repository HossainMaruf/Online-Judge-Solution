#include <iostream>

inline std::string combine_them(const std::string& str1, const std::string& str2) {
	int i=0, j=0, index = 0;
	char combined_str[1<<7];
	while(str1[i] != '\0' || str2[j] != '\0') {
		if(str1[i] != '\0') combined_str[index++] = str1[i++];
		if(str2[j] != '\0') combined_str[index++] = str2[j++];
	}
	combined_str[index] = '\0';
	return combined_str;
}

int main(int param, char** argv) {	

	std::string st1, st2;
	int t;
	std::cin >> t;
	while(t--) {
		std::cin >> st1 >> st2;
		std::cout << combine_them(st1,st2) << std::endl;
	}
	
	return 0;
}