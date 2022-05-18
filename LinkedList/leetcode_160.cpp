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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1=headA, *p2=headB;
        while(p1!=p2){
            if(p1==NULL) p1=headA;
            else p1=p1->next;
            
            if(p2==NULL) p2=headB;
            else p2=p2->next;
        }
        return p1;
    }
};