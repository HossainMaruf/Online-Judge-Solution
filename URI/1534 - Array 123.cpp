#include <stdio.h>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    while(scanf("%d",&n) != EOF) {
        int ar[n][n];
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if((i+j) == (n-1)) ar[i][j] = 2;
                else if(i == j) ar[i][j] = 1;
                else ar[i][j] = 3;
            }
        }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
    }
    return 0;
}