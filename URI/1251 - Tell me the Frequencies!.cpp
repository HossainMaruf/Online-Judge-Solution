#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

struct comp {
    bool operator () (std::pair<int,int> p1, std::pair<int,int> p2) const  {
        if(p1.second == p2.second) return p1.first > p2.first;
        else return p1.second < p2.second;
    }
};
int count = 1;
int main() {
    std::string text;
    while(std::cin >> text) {
        if(count > 1) printf("\n");
        std::cin.ignore();
        std::vector<std::pair<int,int>> v(96,{0,0});
        for(int i=0; i<text.length(); ++i) {
            v[text[i] - 32] = {text[i], ++(v[text[i] - 32].second)};
        }
        std::sort(v.begin(), v.end(), comp());
        for(int i=0; i<96; i++) {
            if(v[i].first != 0)
                printf("%d %d\n",v[i].first,v[i].second);
        }
        count++;
    }    
    return 0;
}