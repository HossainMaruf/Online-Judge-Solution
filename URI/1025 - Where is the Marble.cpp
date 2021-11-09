#include <iostream>
#include <algorithm>
#include <algorithm>
#include <cctype>
using namespace std;

typedef long long int lli;

int binary_search(int ar[], int l, int h, int key) {
    // int mid;
    // while(l <= h) {
    //     mid = (l+h)/2;
    //     if(key == ar[mid]) return mid;
    //     if(key > ar[mid]) l = mid+1;
    //     else h = mid-1;
    // }
    // return -1;
    int mid;
    if(l > h) return -1;
    else {
        mid = (l+h)/2;
        if(key == ar[mid]) return mid;
        if(key > ar[mid]) return binary_search(ar,mid+1,h,key);
        else return binary_search(ar,l,mid-1,key);
    }
}


int main() {

    int n, num_search, Case = 1;
    while((std::cin >> n >> num_search) && (n || num_search)) {
        int ar[n], search[num_search];
        for(int i=0; i<n; i++) std::cin >> ar[i];
        std::sort(ar,ar+n);

        printf("CASE# %d:\n",Case++);
        while(num_search--) {
            int key;
            std::cin >> key;
            // int index = binary_search(ar,0,n-1,key);
            // if(index == -1) printf("%d not found\n",key);
            // else printf("%d found at %d\n",key,index+1);

            auto itr = lower_bound(ar,ar+n,key);
            if(itr == ar+n || *itr != key) printf("%d not found\n",key);
            else printf("%d found at %d\n",key,(itr-ar)+1);
        }
    }
  
    return 0;
}