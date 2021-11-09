#include <iostream>
#include <algorithm>
#include <stdio.h>

int main() {

    int t;
    std::string food,breakfast,lunch,output;
    std::cin >> t;
    std::cin.ignore();
    while(t--) {
        bool flag = true;
        output.clear();
        bool hash[26];
        std::fill(hash,hash+26,false);

        std::getline(std::cin, food);
        std::getline(std::cin, breakfast);
        std::getline(std::cin, lunch);

        if(food == "" && breakfast == "" && lunch == "") {
            output = "";
            flag = false;
        } else {
            if(food != "") {
                for(int i=0; food[i]; i++) hash[food[i]-65] = true;
            }
            if(breakfast != "") {
                for(int i=0; breakfast[i]; i++) {
                    if(hash[breakfast[i]-65] == false) {
                        output = "CHEATER";
                        flag = false;
                        break;
                    } else hash[breakfast[i] - 65] = false;
                }
            }
            if(lunch != "") {
                for(int i=0; lunch[i]; i++) {
                    if(hash[lunch[i] - 65] == false) {
                        output = "CHEATER";
                        flag = false;
                        break;
                    } else hash[lunch[i] - 65] = false;
                }
            }
        }

        if(flag == false)
            std::cout << output;
        else {
            for(int i=0; i<26; i++) {
                if(hash[i]) printf("%c",i+65);
            }
        }
        std::cout << "\n";
    }
    return 0;
}