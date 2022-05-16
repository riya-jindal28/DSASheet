#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(!head || !head->next) return head;
        Node* z = new Node(0);
        Node* o = new Node(0);
        Node* t = new Node(0);
        Node *zero=z, *one=o, *two=t;
        Node* curr=head;
        while(curr){
            if(curr->data==0){
                zero->next=curr;
                curr=curr->next;
                zero=zero->next;
            }
            else if(curr->data==1){
                one->next=curr;
                curr=curr->next;
                one=one->next;
            }
            else{
                two->next=curr;
                curr=curr->next;
                two=two->next;
            }
        }
        
        zero->next=o->next ? o->next : t->next;
        one->next=t->next;
        two->next=NULL;
        
        head=z->next;
        
        delete z;
        delete o;
        delete t;
       return head; 
    }
};