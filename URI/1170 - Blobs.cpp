#include <iostream>

inline int count_days(const float& food) {
    if(food <= 1.0f) return 0;
    else return 1 + count_days(food/2);
}

int main() {

    int t;
    float food;
    std::cin >> t;
    while(t--) {
        std::cin >> food;
        std::cout << count_days(food) <<" dias"<< std::endl;
    }

    return 0;
}