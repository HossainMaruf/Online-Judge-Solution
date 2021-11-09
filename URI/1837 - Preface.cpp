#include <iostream>
#include <math.h>

inline int findMultiples(int a, int b) {
    int i=a;
    while(a%b != 0) a++;
    return a;
}

int main() {

    int a, b;

    std::cin >> a >> b;
    if(a < 0) {
        int value = findMultiples(abs(a),b);
        std::cout << -(value/b) << " " << (value+a) << std::endl;
    } else std::cout << (a/b) <<" "<< (a%b) << std::endl;
    
    return 0;
}