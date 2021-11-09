#include <bits/stdc++.h>

int main() {
    char c;
    std::string temp;
    std::set<std::string> m;

    while(std::cin.get(c)) {
        if(isalpha(c)) temp += tolower(c);
        else { m.insert(temp); temp.clear(); }
    }
    if(!temp.empty()) { m.insert(temp); temp.clear(); }
    for(auto it = m.begin(); it != m.end(); it++) {
        if(it == m.begin()) continue;
        std::cout << *it << std::endl;
    }
    return 0;
}