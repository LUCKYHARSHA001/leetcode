class Solution {
public:
    int check(vector<int>& subarr){
        int c=0;
        for(int i=0;i<subarr.size()-1;i++){
            if(subarr[i]==subarr[i+1]-1){
                c++;
            }
        }
        if(c==subarr.size()){
            return c;
        }
        return 0;
    }
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int it:hand){
            mp[it]++;
        }
        int cnt=0;
        vector<int>v(groupSize);
        int n=0;
        for(auto it:mp){
            if(n==groupSize){
                int checker=check(v);
                if(checker){
                    cnt++;
                }
            }
            if(it.second){
                v.push_back(it.first);
                n++;
            }
        }
        if(cnt==groupSize)return true;
        else return false;
    }
};