#define mod 1000000007
class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& q) {
        vector<int>powers,res;
        for(int i=0;i<31;i++){
            if((n>>i)&1){
                powers.push_back(pow(2,i));
            }
        }
        for(int i=0;i<q.size();i++){
            long long x=1;
            for(int j=q[i][0];j<=q[i][1];j++){
                x=(x*powers[j])%mod;
            }
            res.push_back(x);
        }
        return res;
    }
};