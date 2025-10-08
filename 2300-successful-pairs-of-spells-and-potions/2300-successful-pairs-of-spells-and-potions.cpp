class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>res;
        sort(potions.begin(),potions.end());
        int m=potions.size();
        for(int spell:spells){
            long long mid=(success+spell-1)/spell;
            auto it=lower_bound(potions.begin(),potions.end(),mid);
            int count=distance(it,potions.end());
            res.push_back(count);
        }
        return res;
    }
};