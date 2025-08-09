class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int mid=target-nums[i];
            if(mp.find(mid)!=mp.end()){
                return {mp[mid],i+1};
            }
            mp.insert({nums[i],i+1});
        }
        return {};
    }
};