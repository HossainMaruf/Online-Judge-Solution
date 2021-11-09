#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    const int n = 20;
    int ar[n];
    for(int i=0; i<n; i++) cin >> ar[i];
    for(int i=1; i<=n; i++) printf("N[%d] = %d\n",(i-1),ar[n-i]);
    

    return 0;
}