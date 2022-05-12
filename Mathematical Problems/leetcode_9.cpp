class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int temp=0;
        long long int ans=0;
        if(x<0){
            return false;
        }
        while(x!=0){
            temp=x%10;
            ans=ans*10+temp;
            x=x/10;   
        }
        if(num==ans){
            return true;
        }
        return false;
    }
};