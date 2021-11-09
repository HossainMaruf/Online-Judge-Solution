#include <iostream>
#include <algorithm>
#include <numeric>

int main() {

	int t, n;
	std::string text;
	std::cin >> t;
	while(t--) {
		long long int hash[26];
		std::fill(hash,hash+26,0);
		std::cin >> n;
		for(int i=0; i<n; i++) {
			std::cin >> text;
			for(int j=0; text[j] != '\0'; j++) {
				hash[text[j]-65] += (text[j]-65) + i + j;
			}
		}
		std::cout << std::accumulate(hash,hash+26,0) << std::endl;
	}
	return 0;
}