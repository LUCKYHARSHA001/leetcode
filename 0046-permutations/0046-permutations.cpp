class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        if(nums.size()==1){
            vector<int>ones;
            ones.push_back(nums[0]);
            res.push_back(ones);
            return res;
        }
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            vector<int>rn;
            for(int j=0;j<nums.size();j++){
                if(j!=i){
                    rn.push_back(nums[j]);
                }
            }
            vector<vector<int>>pre=permute(rn);
            for(vector<int>p:pre){
                p.insert(p.begin(),n);
                res.push_back(p);
            }
        }
        return res;
    }
};