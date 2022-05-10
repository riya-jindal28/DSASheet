#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0,e=0;
        while(s<=e && e<nums.size()){
            if(nums[s]==0 && nums[e]==0){
                e++;
            }
            else if(nums[s]==0 && nums[e]!=0){
                swap(nums[s], nums[e]);
                s++;
                e++;
            }
            else if(nums[e]!=0 && nums[s]!=0){
                s++;
                e++;
            }
        }
    }
};