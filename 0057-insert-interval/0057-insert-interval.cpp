class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>&var) {
        vector<vector<int>>res;
        int i=0;int n=arr.size();
        while(i<arr.size() and arr[i][1]<var[0]){
            res.push_back(arr[i]);
            i+=1;
        }
        while(i<n and arr[i][0]<=var[1]){
            var[0]=min(var[0],arr[i][0]);
            var[1]=max(var[1],arr[i][1]);
            i+=1;
        }
        res.push_back(var);
        while(i<n){
            res.push_back(arr[i]);
            i+=1;
        }
        return res;
    }
};