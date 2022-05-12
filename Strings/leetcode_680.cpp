#include<string>
using namespace std;
class Solution {
public:
    bool isPalin(string s, int l, int r){
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
               return isPalin(s,i+1,j) || isPalin(s,i,j-1);
        }
        }
        return true; 
    }
};