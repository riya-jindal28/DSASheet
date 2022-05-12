#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
		// int n = nums.size();
		// sort(nums.begin(), nums.end());
		// return max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
		// }
        
        int n = nums.size();
        int max1=INT_MIN, max2=INT_MIN, max3=INT_MIN;
        int min1=INT_MAX, min2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<=min1){
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<=min2){
                min2=nums[i];
            }
            if(nums[i]>=max1){
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>=max2){
                max3=max2;
                max2=nums[i];
            }
            else if(nums[i]>=max3){
                max3=nums[i];
            }
        }
        return max(min1*min2*max1, max1*max2*max3);
    }
};