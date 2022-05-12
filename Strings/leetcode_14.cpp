#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string a="", b="", res="";
        a=strs[0];
        b=strs[n-1];
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
               return res; 
            }
            res+=a[i];
        }
        return res;
    }
};