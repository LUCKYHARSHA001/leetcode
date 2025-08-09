class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX,maxi=INT_MIN,ans=0;
        for(int i=0;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
                maxi=0;
            }
            if(prices[i]>maxi){
                maxi=prices[i];
            }
            int diff=maxi-mini;
            if(ans<diff)ans=diff;
        }
        return ans;
    }
};