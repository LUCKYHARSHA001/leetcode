class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0;
        long long zcnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zcnt++;
                cnt+=zcnt;
            }
            else{
                zcnt=0;
            }
        }
        return cnt;
    }
};