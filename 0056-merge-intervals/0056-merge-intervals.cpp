class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>innerinter;
        if(intervals.size()==0)return innerinter;
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(auto it:intervals){
            if(it[0]<=temp[1])temp[1]=max(it[1],temp[1]);
            else{
                innerinter.push_back(temp);
                temp=it;
            }
        }
        innerinter.push_back(temp);
        return innerinter;
    }
};