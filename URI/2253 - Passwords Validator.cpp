#include <iostream>
#include <algorithm>
#include <cctype>

typedef long long int lli;

bool isValid(std::string& text) {
    bool upper = false, lower = false, digit = false;
    for(int i=0; text[i]!='\0'; i++) {
        if(ispunct(text[i]) || isspace(text[i])) return false;
        if(isupper(text[i])) upper = true;
        if(islower(text[i])) lower = true;
        if(isdigit(text[i])) digit = true;
    }
    return upper && lower && digit;
}


int main() {

    std::string text;
    while(std::getline(std::cin, text)) {
        int len = text.length();
        if(len>=6 && len<=32 && isValid(text)) {
            std::cout << "Senha valida." << std::endl;
        } else std::cout << "Senha invalida." << std::endl;
    }

    return 0;
}