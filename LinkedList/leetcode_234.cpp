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
    // bool isPalindrome(ListNode* head) {
    //     stack<ListNode*> st;
    //     ListNode* shead=head;
    //     while(shead){
    //         st.push(shead);
    //         shead=shead->next;
    //     }
    //     while(!st.empty() && head){
    //         if(head->val != st.top()->val){
    //             return false;
    //         }
    //         st.pop();
    //         head=head->next;
    //     }
    //     return true;
    // }
    
    bool isPalindrome(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast && fast->next) {
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast)
            slow=slow->next;

		// reverse the last half of the list
        ListNode *dummy = slow;
        ListNode *last = NULL;
        ListNode *next = NULL;
        while(dummy){
            next = dummy->next;
            dummy->next = last;
            last = dummy;
            dummy = next;
        }

		// compare each half of the list
        dummy = last;
        while(dummy){
            if (dummy->val == head->val){
                dummy = dummy->next;
                head = head->next;
            } 
            else
                return false;
        }
        return true;
    }
};