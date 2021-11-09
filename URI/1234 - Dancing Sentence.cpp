#include <iostream>
#include <cctype>

int main() {

    std::string text;
    while(std::getline(std::cin, text)) {
        bool flag = false,toUp = false, toLow = false;
        for(int i=0; text[i]; ++i) {
            if(isspace(text[i])) continue;
            if(isalpha(text[i]) && !flag) {
                flag = true;
                text[i] = toupper(text[i]);
                toLow = true;
                continue;
            }
            if(toLow) {
                text[i] = tolower(text[i]);
                toUp = true;
                toLow = false;
                continue;
            }
            if(toUp) {
                text[i] = toupper(text[i]);
                toUp = false;
                toLow = true;
            }
        }
        std::cout << text << std::endl;
    }
    return 0;
}