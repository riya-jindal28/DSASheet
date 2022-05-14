#include<iostream>
#include<algorithm>
using namespace std;

int findceil(int ar[],int n,int x){
    if(x<=ar[0]){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(ar[i]==x)
        return i;

        if(ar[i]<x && ar[i+1]>=x)
        return i+1;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int x;
    cin>>x;
    sort(ar,ar+n);
    int index = findceil(ar,n,x);
    if(index){
        cout<<"Ceil Found : "<<ar[index];
    }
    else{
        cout<<"Ceil Not Found";
    }
    return 0;
}