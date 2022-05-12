#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        while(n>0){
            n--;
            ans+=('A'+n%26);
            n=n/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};