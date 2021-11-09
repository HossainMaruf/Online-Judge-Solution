#include <bits/stdc++.h>
using namespace std;

int main() {

    double number;
    cin>>number;

    if(number>=0.0 && number<=25.0) cout<<"Intervalo [0,25]"<<endl;
    else if(number>25.0 && number<=50.0) cout<<"Intervalo (25,50]"<<endl;
    else if(number>50.0 && number<=75) cout<<"Intervalo (50,75]"<<endl;
    else if(number>75.0 && number<=100) cout<<"Intervalo (75,100]"<<endl;
    else cout<<"Fora de intervalo"<<endl;

    return 0;
}