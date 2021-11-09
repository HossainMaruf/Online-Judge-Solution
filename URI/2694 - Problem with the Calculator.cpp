#include <iostream>
#include <algorithm>
#include <math.h>
#include <cctype>
using namespace std;

typedef long long int lli;

int strToint(string& str) {
    int len = str.length();
    int value = 0, idx = 0;
    for(int i=len-1; i>=0; i--) {
        value += pow(10,idx++)*(str[i] - 48);
    }
    return value;
}

int main() {

    int t;
    std::cin >> t;
    while(t--) {
        std::string str;
        std::cin >> str;
        long long value = 0;
        long long sum = 0;
        int idx;
        for(int i=str.length()-1; i>=0; i--) {
            if(isdigit(str[i])) {
                if(!isdigit(str[i+1])) idx = 0;
                value += pow(10,idx++) * (str[i] - 48);
            }
        }
        std::cout << value << std::endl;
    }
  
    return 0;
}