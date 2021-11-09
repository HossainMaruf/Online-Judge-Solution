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


void pre(struct Node *root) {
    if(root == NULL) return;
    // if(counter == n) std::cout << root->data;
    // else std::cout << root->data << " ";
    // counter++;
    std::cout << " " << root->data;
    pre(root->left);
    pre(root->right);
}

void in(struct Node *root) {
    if(root == NULL) return;
    // if(counter == n) std::cout << root->data;
    // else std::cout << root->data << " ";
    // counter++;
    in(root->left);
    std::cout << " " << root->data;
    in(root->right);
}

void post(struct Node *root) {
    if(root == NULL) return;
    // if(counter == n) std::cout << root->data;
    // else std::cout << root->data << " ";
    // counter++;
    post(root->left);
    post(root->right);
    std::cout << " " << root->data;
}

int main() {

    int t,value, Case = 1;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        for(int i=0; i<n; i++) {
            std::cin >> value;
            insert(&root,value);
        }
        printf("Case %d:\n",Case++);
        printf("Pre.:");
        pre(root);
        printf("\nIn..:");
        in(root);
        printf("\nPost:");
        post(root);
        printf("\n\n");
        root = NULL;
    }

    return 0;
}