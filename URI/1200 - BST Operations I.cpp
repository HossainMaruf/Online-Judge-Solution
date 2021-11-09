#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <queue>

bool flag;

struct Node {
    char data;
    struct Node *left = NULL, *right = NULL;
}*root = NULL;

void insert(struct Node **root, char value) {
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
    if(flag) {
        std::cout << root->data;
        flag = false;
    }
    else std::cout << " " << root->data;
    pre(root->left);
    pre(root->right);
}

void in(struct Node *root) {
    if(root == NULL) return;
    in(root->left);
    if(flag) {
        std::cout << root->data;
        flag = false;
    }
    else std::cout << " " << root->data;
    in(root->right);
}

void post(struct Node *root) {
    if(root == NULL) return;
    post(root->left);
    post(root->right);
    if(flag) {
        std::cout << root->data;
        flag = false;
    }
    else std::cout << " " << root->data;
}

bool search(struct Node *root, char key) {
    if(root == NULL) return false;
    if(root->data == key) return true;
    if(key >= root->data) return search(root->right,key);
    else return search(root->left,key);
}

int main() {

    std::string cmd;
    while(std::cin >> cmd) {
        if(cmd == "I") {
            char value;
            std::cin >> value;
            insert(&root,value);
        } else if(cmd == "P") {
            char key;
            std::cin >> key;
            if(search(root,key)) printf("%c existe\n",key);
            else printf("%c nao existe\n",key);
        } else if(cmd == "INFIXA") {
            flag = true;
            in(root);
            printf("\n");
        } else if(cmd == "PREFIXA") {
            flag = true;
            pre(root);
            printf("\n");
        } else {
            flag = true;
            post(root);
            printf("\n");
        }
    }

    return 0;
}