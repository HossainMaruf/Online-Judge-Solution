#include <iostream>

inline int LCsub(std::string& text1, std::string& text2, int len1, int len2) {
	int result=0, count;
	for(int i=0; i<len1; i++) {
		for(int j=0; j<len2; j++) {
			if(text1[i] == text2[j]) {
				count = 0;
				for(int k=i,l=j; k<len1,l<len2; k++,l++) {
					if(text1[k] != text2[l]) break;
					count++;
				}
				result = std::max(result,count);
			}
		}
	}
	return result;
}

int main() {

	std::string text1, text2;
	while(std::getline(std::cin, text1)) {
		std::getline(std::cin, text2);
		std::cout << LCsub(text1,text2,text1.size(),text2.size()) << std::endl;
	}
	return 0;
}