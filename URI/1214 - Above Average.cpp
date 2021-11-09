#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    int t,n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        std::vector<int> v(n);
        for(int i=0; i<n; i++) std::cin >> v[i];
        float avg = std::accumulate(v.begin(),v.end(),0) / n;
        int up_avg = 0;
        for(int i=0; i<n; i++)
            if(v[i] > avg) up_avg++;
        std::cout << std::fixed << std::setprecision(3) << ((float)up_avg/n)*100 << "%" << std::endl;
    }

    return 0;
}