class Solution {
public:
    int maxFreqSum(string s) {
        vector<char>v={'a','e','i','o','u'};
        map<char,int>mp;
        for(char it:s){
           mp[it]++;
        }
        int vowcnt=0;
        int concnt=0;
        for(auto it:mp){
            if(find(v.begin(), v.end(), it.first)!= v.end())vowcnt=max(vowcnt,it.second);
            else concnt=max(concnt,it.second);
        }
        return vowcnt+concnt;
    }
};