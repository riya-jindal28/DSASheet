#include<string>
using namespace std;
class Solution {
public:
    int strStr(string h, string n) {
        int l1 = h.length(), l2=n.length();
        if(n.empty()) return 0;
        for(int i=0;i<=l1-l2;i++){
            int j=0;
            for(j=0;j<l2;j++){
                if(h[i+j]!=n[j]) break;
            }
            if(j==l2){
                return i;
            }
        }
        return -1;
    }
};