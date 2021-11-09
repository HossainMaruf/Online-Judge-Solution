#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <queue>


struct Node {
    int data;
    struct Node *left = NULL, *right = NULL;
}*root = NULL;

void insert(struct Node **root, int value) {
   if(*root == NULL) {
       Node *newNode = new Node;
       newNode->data = value;
       *root = newNode;
   } else {
       if(value >= (*root)->data) insert(&(*root)->right,value);
       if(value < (*root)->data) insert(&(*root)->left,value);
   }
}

int main() {

    int t, Case = 1;
    std::cin >> t;
    while(t--) {
        int n, value,counter=1;
        printf("Case %d:\n",Case++);
        std::cin >> n;
        // int ar[n];
        for(int i=0; i<n; i++) {
            std::cin >> value;
            insert(&root,value);
        }
        std::queue<struct Node*> q;
        q.push(root);

        while(!q.empty()) {
            struct Node *temp = q.front();
            // std::cout << temp->data << " ";
            if(counter == n) std::cout << temp->data;
            else std::cout << temp->data << " ";
            counter++;
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
            q.pop();
        }
        root = NULL;
        printf("\n\n");
        //if(t != 0) printf("\n");
    }

    return 0;
}