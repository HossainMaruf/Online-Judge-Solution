#include <bits/stdc++.h>
using namespace std; 

class ListNode {
public:
	int data;
	ListNode *next = NULL;
	ListNode *head = NULL;
	ListNode(int data) : data(data), next(NULL) {}
	void insertData(int);
};

void ListNode::insertData(int data) {
	ListNode *newNode = new ListNode(data);
}

int main() {



	return 0;
}