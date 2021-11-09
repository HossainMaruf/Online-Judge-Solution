#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    const int n = 10;
    int initial, ar[n];
    cin >> initial;
    
    for(int i=0; i<n; i++) 
        ar[i] = initial, initial *= 2;

    for(int i=0; i<n; i++) printf("N[%d] = %d\n",i,ar[i]);
    
    return 0;
}