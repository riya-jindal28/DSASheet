#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        int i=0, j=n-1;
        while(i<j){
            if(m[j][i]==1)
            j--;
            else
            i++;
        }
        int cand = i;
        
        for(int i=0;i<n;i++){
            if(cand!=i){
                if(m[i][cand]==0 || m[cand][i]==1){
                    return -1;
                }
            }
        }
        return cand;
    }
};