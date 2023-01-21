class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *current = head, *n;   
            while(current) {
                n = current->next;
                current->next = prev;
                prev = current;
                current = n;  
        }
        return prev;
    }
};

/*
Easy
Time = O(n)
Space = O(1)
*/