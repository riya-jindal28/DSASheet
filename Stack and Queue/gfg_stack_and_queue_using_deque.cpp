#include<iostream>
using namespace std;

struct deq{
    int val;
    deq *next, *prev;
};

class Deque{
    private:
    deq* head;
    deq* tail;

    public:
    Deque(){
        head=tail=NULL;
    }

    bool isEmpty(){
        if(head==NULL) return true;
        return false;
    }

    int size(){
        if(!isEmpty()){
            deq* temp=head;
            int len=0;
            while(temp){
                len++;
                temp=temp->next;
            }
            return len;
        }
        return 0;
    }

    void insert_first(int x){
        deq *temp = new deq;
        temp->val;
        if(head==NULL){
            head=tail=temp;
            temp->next=temp->prev=NULL;
        }
        else{
            head->prev=temp;
            temp->prev=NULL;
            temp->next=head;
            head=temp;
        }
    }

    void insert_last(int x){
        deq *temp=new deq;
        temp->val=x;

        if(head==NULL){
            head=tail=temp;
            temp->next=temp->prev=NULL;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            temp->next=NULL;
            tail=temp;
        }
    }
    void remove_first(){
        if(!isEmpty()){
            deq* temp=head;
            head=head->next;
            if(head) head->prev=NULL;
            delete head;
            if(head==NULL) tail=NULL;
            return;
        }
    }

    void remove_last(){
        if(!isEmpty()){
            deq* temp=tail;
            tail=tail->prev;
            if(tail) tail->next=NULL;
            delete tail;
            if(tail==NULL) head=NULL;
            return;
        }
    }
};

class Stack : public Deque{
public:
    void push(int x){
        insert_last(x);
    }
    void pop(){
        remove_last();
    }
};

class Queue : public Deque{
public:
    void enqueue(int x){
        insert_last(x);
    }
    void dequeue(){
        remove_first();
    }
};