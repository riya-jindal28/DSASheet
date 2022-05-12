#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length(),l2=b.length();
        int i=l1-1,j=l2-1;
        int c=0;
        string ans="";
        while(i>=0 || j>=0 || c){
            if(i>=0){
               c+=a[i--]-'0'; 
            }
            if(j>=0){
               c+=b[j--]-'0'; 
            }
            ans+=(c%2+'0');
            c=c/2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};