class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int st=0;
        int curr=0;
        int total=0;

        for(int i=0;i<gas.size();i++){
            int gain=gas[i]-cost[i];
            total+=gain;
            curr+=gain;
            if(curr<0){
                curr=0;
                st=i+1;
            }
        }
        if(total<0){
            return -1;
        }
        else{
            return st;
        }
    }
};