#include<vector>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int ans=0;
        // for(int i=n-1;i>0;i--){
        //     ans+=nums[i]-nums[0];
        // }
        // return ans;
        int n=nums.size();
        int mini=nums[0];
        int sum=nums[0];
        for(int i=1;i<n;i++){
            sum+=nums[i];
            mini=min(nums[i],mini);
        }
        return sum-mini*n;
    }
};