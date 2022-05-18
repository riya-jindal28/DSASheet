#include<iostream>
#include<string.h>
using namespace std;

struct Stack* createStack( unsigned capacity );
int isEmpty(struct Stack* stack);
int peek(struct Stack* stack);
int pop(struct Stack* stack);
void push(struct Stack* stack, int op);
int evaluatePostfix(char* exp)
{
    struct Stack* s=createStack(strlen(exp));
    for(int i=0;i<strlen(exp);i++){
        if(isdigit(exp[i])){
            push(s,exp[i]-'0');
        }
        else{
            int n1=peek(s);
            pop(s);
            int n2=peek(s);
            pop(s);
            
            switch(exp[i]){
                case '+': push(s,n2+n1);
                break;
                case '*': push(s,n2*n1);
                break;
                case '-': push(s,n2-n1);
                break;
                case '/': push(s,n2/n1);
                break;
            }
        }
    }
    int ans=peek(s);
    return ans;
}