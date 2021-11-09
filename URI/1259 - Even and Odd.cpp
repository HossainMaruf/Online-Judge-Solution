#include <iostream>
#include <list>

using namespace std;

int main() {

    int n,value;
    cin>>n;

    list<int> l;

    for(int i=0; i<n; i++) {
        cin>>value;
        l.push_back(value);
    }

    l.sort();

    list<int>::iterator i;

    for(i=l.begin(); i!=l.end(); i++) {;
        if(*i%2 == 0) {
            cout<<*i<<endl;
        }
    }

    l.reverse();

    for(i=l.begin(); i!=l.end(); i++) {;
        if(*i%2 != 0) {
            cout<<*i<<endl;
        }
    }

    return 0;
}