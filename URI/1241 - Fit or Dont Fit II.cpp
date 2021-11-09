#include <iostream>


int main() {

    int t;
    std::string num1, num2;
    std::cin >> t;

    while(t--) {
        std::string status = "encaixa";
        std::cin >> num1 >> num2;
        int len1 = num1.length();
        int len2 = num2.length();
        if(len1 < len2) status = "nao encaixa";
        else {
            for(int i=len1-len2, j=0; i<len1; i++, j++) {
                if(num1[i] != num2[j]) status = "nao encaixa";
            }
        }
        std::cout << status << std::endl;
    }

    return 0;
}