#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, amount;
    double hours;
    
    cin>>n>>amount;
    
    cin>>hours;
    
    cout<<"NUMBER = "<<n<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<amount*hours<<endl;
 
    return 0;
}