#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n;
    while(cin >> n) {
        string ans = "NO";
        int root = sqrt(n);
        for(int i=0; i<=root; i++) {
            for(int j=root; j>=0; j--) {
                if((i*i + j*j) == n) {
                    ans = "YES";
                    break;
                }
            }
        }
        cout << ans << endl;
    }


    return 0;
}