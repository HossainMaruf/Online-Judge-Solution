#include <bits/stdc++.h>
 
using namespace std;

struct product {
    int id, amount;
    double price;
}p1,p2;
 
int main() {
 
    cin>>p1.id>>p1.amount>>p1.price;
    cin>>p2.id>>p2.amount>>p2.price;
    
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<(p1.amount * p1.price) + (p2.amount * p2.price)<<endl;
 
    return 0;
}