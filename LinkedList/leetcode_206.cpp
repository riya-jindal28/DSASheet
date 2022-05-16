#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), 
    next(NULL) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};