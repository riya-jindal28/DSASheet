#include<iostream>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        for(int i=0;i<s.size();){
            if(s[i]=='#' && i==0){
                s.erase(s.begin()+0);
            }
            else if(s[i]=='#' && i>0){
                s.erase(i-1,2);
                i--;
            }
            else{
                i++;
            }
        }
        for(int i=0;i<t.size();){
            if(t[i]=='#' && i==0){
                t.erase(t.begin()+0);
            }
            else if(t[i]=='#' && i>0){
                t.erase(i-1,2);
                i--;
            }
            else{
                i++;
            }
        }
        return s==t;    
    }
};