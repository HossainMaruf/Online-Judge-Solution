#include <iostream>
#include <algorithm>

typedef long long int lli;

struct Node {
    int num;
    struct Node *next = NULL;
};

struct Chaining {
    struct Node *first = NULL, *last = NULL;
};

int hash_code(int value, int m) {
  return value % m;
}

int main() {

    int n;
    std::cin >> n;
    while(n--) {
        int m, c, value;
        std::cin >> m >> c;
        Chaining *index = new Chaining[m];
        for(int i=0; i<c; i++) {
            std::cin >> value;
            int code = hash_code(value,m);
            Node *node = new Node();
            node->num = value;
            if(index[code].first == NULL) index[code].last = index[code].first = node;
            else index[code].last = index[code].last->next = node;
        }
        for(int i=0; i<m; i++) {
            struct Node *temp = index[i].first;
            std::cout << i << " -> ";
            while(temp != NULL) {
                std::cout << temp->num << " -> ";
                temp = temp->next;
            }
            std::cout << "\\" << std::endl;
        }
        if(n != 0) std::cout << "\n";
    }

    return 0;
}