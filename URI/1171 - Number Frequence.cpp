#include <iostream>
#include <vector>
#include <stdio.h>

int main() {

    int n, value;
    std::cin >> n;
    std::vector<int> v(2001,0);

    for(int i=0; i<n; i++) {
        std::cin >> value;
        v[value]++;
    }

    for(int i=1; i<2001; i++) {
        if(v[i] != 0) printf("%d aparece %d vez(es)\n",i,v[i]);
    }

    return 0;
}