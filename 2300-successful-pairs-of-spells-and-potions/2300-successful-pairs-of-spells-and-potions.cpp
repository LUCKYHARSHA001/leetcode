class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>res;
        int var=0;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
           for(int j=0;j<potions.size();j++){
            if(potions[j]*spells[i]>=success){
                cout<<potions[j]*spells[i]<<" ";
                var=potions.size()-j;
                break;
            }
           }
           if(var){
           res.push_back(var);
           var=0;
           }else{
            res.push_back(0);
           }
        }
        return res;

    }
};