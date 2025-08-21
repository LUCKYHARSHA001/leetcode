class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>vp;
        for(auto it:mp){
            vp.push_back({it.second,it.first});
        }
        sort(vp.rbegin(),vp.rend());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(vp[i].second);
        }
        return res;
    }
};