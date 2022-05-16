#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    } 
};

long long  multiplyTwoLists (Node* l1, Node* l2){
    long long n1=0, n2=0;
    while(l1){
       n1 = (n1*10 + l1->data) % 1000000007; 
       l1=l1->next;
    }
    while(l2){
        n2 = (n2*10 + l2->data) % 1000000007;
        l2=l2->next;
    }
     return (n1*n2)%1000000007;
}