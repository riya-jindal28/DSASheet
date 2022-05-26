#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            int x = abs(nums[i]);
            if(nums[x-1]<0){
                v.push_back(x);
            }
            else{
                nums[x-1]*=-1;
            }
        }
        return v;
//         int n = nums.size();
//         vector<int> ans;
//         int count[100001]={0};
        
//         for(int i=0;i<n;i++){
//             count[nums[i]]++;
//         }
//         for(int i=0;i<100001;i++){
//             if(count[i]>1){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
    }
};