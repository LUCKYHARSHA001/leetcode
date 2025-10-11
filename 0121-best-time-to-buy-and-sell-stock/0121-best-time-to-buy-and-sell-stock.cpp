class Solution {
public:
    int maxProfit(vector<int>& prizes) {
        int n=prizes.size();
        int mini=INT_MAX,maxi=INT_MIN,ans=0;
        for (int i=0;i<n;i++){
            if(prizes[i]<mini){
                mini=prizes[i];
                maxi=0;
            }
            if(prizes[i]>maxi){
                maxi=prizes[i];
            }
            int diff=maxi-mini;
            if(diff>ans)ans=diff;
        }
        return ans;
    }
};