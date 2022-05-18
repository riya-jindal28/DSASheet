#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int> ans(n,0);
        if(n==1) return ans;
        for(int i=n-2;i>=0;i--){
            if(t[i]<t[i+1]){
                ans[i]=i+1;
                continue;
            }
            int temp=ans[i+1];
            while(temp!=0){
                if(t[temp]>t[i]){
                    break;
                }
                temp=ans[temp];
            }
            ans[i]=temp;
        }
        for(int i=0;i<n;i++){
            if(ans[i]!=0){
               ans[i]=ans[i]-i;
            }
        }
        return ans;
    }
};