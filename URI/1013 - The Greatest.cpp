#include <iostream>
#include <math.h>
 
using namespace std;

int findmax(int a, int b) {
    return ((a + b + abs(a - b)) / 2);
}
 
int main() {
 
    int a, b, c;
    
    cin>>a>>b>>c;
    
    cout<<findmax(findmax(a,b),c)<<" eh o maior"<<endl;
    
 
    return 0;
}