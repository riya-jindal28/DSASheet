#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                return {m[target-nums[i]],i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
        // vector<pair<int,int> > res;
        // int n = nums.size();
        // vector<int> arr;
        // for(int i=0;i<n;i++){
        //     res.push_back(make_pair(nums[i],i));
        // }
        // sort(res.begin(), res.end());
        // int i=0,j=n-1;
        // while(i<j){
        //     if(res[i].first+res[j].first==target){
        //         arr.push_back(res[i].second);
        //         arr.push_back(res[j].second);
        //         i++;
        //         j--;
        //     }
        //     else if(res[i].first+res[j].first<target){
        //         i++;
        //     }
        //     else{
        //         j--;
        //     }
        // }
        // return arr;
};