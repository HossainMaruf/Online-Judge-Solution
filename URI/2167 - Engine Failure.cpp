#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int n = 12;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++) cin >> ar[i];
    int index = 0;
    for(int i=0; i<n-1; i++) {
       if(ar[i] > ar[i+1]) {
           index = i+2;
           break;
       }
    }

    cout << index << endl;

    return 0;
}