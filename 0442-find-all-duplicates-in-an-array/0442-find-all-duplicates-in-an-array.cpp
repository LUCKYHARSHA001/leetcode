class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        sort(nums.begin(),nums.end());
        vector<int>result;
       for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            result.push_back(nums[i]);
        }
       }
        return result;
    }
};