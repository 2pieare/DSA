class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total = 0;
        int balance = 0;
        int ind = 0; 
        for(int i=0; i<n; i++){
            balance += gas[i] - cost[i];
            total += gas[i]-cost[i];
            if(total < 0){
                total = 0;
                ind = i+1;
            }
        }
        return (balance < 0) ? -1 : ind;
    }
};
