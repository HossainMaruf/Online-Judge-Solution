#include <iostream>
#include <deque>
#include <vector>

int main() {

    int n;
    while((std::cin >> n) && n) {
        std::deque<int> d;
        std::vector<int> v;
        for(int i=1; i<=n; i++) d.push_back(i);
        while(!(d.size() == 1)) {
            v.push_back(d.front());
            d.pop_front();
            d.push_back(d.front());
            d.pop_front();
        }
        std::cout << "Discarded cards: ";
        int s = v.size();
        for(int i=0; i<s; i++) {
            if(i != s-1) std::cout << v[i] << ", ";
            else std::cout << v[i] << std::endl;
        }
        std::cout << "Remaining card: ";
        std::cout << d.front() << std::endl;
    }

    return 0;
}