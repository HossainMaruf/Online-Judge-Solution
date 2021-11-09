#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string name;
    double salary, sell;
    
    cin>>name>>salary>>sell;
    
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salary + (sell * 0.15)<<endl;
 
    return 0;
}