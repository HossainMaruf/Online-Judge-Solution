#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int row;
    char ch;
    cin >> row >> ch;

    const int n = 12;
    double ar[n][n], sum = 0;

    for(int i=0; i<n; i++) 
        for(int j=0; j<n; j++)
            cin >> ar[i][j];
    for(int i=0; i<n; i++) sum += ar[row][i];

    if(ch == 'S') printf("%0.1lf\n",sum);
    else printf("%0.1lf\n",sum/12.0);
    
    return 0;
}