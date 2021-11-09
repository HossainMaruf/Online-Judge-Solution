#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n,l,h;
    while(scanf("%d%d%d",&n,&l,&h) != EOF) {
        int heights[n];
        for(int i=0; i<n; i++) cin >> heights[i];
        int count = count_if(heights,heights+n,[l,h](int value){
            return (value>=l) && (value<=h);
        });
        cout << count << endl;
    }

    return 0;
}