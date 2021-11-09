#include <iostream>

int main() {

    int t,n;
    std::string word;
    std::cin >> t;
    while(t--) {
        std::cin >> word;
        std::cin.ignore();
        std::cin >> n;
        for(int i=0; word[i]; ++i) {
            if(word[i] - n >= 65) word[i] = word[i] - n;
            else word[i] = 91-(n-(word[i] - 65));
        }
        std::cout << word << std::endl;
    }   

    return 0;
}