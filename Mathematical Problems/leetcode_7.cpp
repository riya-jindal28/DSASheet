#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x!=0){
            if(res>INT_MAX/10 || res<INT_MIN/10)  return 0;
            res=res*10 + x%10;
            x/=10; 
        }
        return res;
    }
};
// class Solution {
// public:
//     int reverse(int x) {
        
//         bool flag = false;
//         if(x<0){
//             flag = true;
//         }
//         x = abs(x);
//         int num = 0,prev_num=0,rem;
//         while(x!=0){
//             rem=x%10;
//             num=num*10+rem;
//             if((num-rem)/10!=prev_num){
//                return 0;
//             }
//             prev_num = num;
//             x=x/10;
//         }
        
//         if(flag)
//         return num*(-1);
//         else
//             return num;
//     }
// };


