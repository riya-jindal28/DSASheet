#include<iostream>
using namespace std;
class Solution {
    struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), 
    next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
public:
ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        while(head!=NULL && head->val==val){   //when head==val
            head = head->next;
        }
        ListNode* curr=head;
        while(curr!=NULL  && curr->next!=NULL){
            if(curr->next->val==val){
                curr->next = curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};