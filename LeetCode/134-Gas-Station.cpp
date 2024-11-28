class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total=0;
        int subsum=INT_MAX;
        int start=0;
        for (int i=0;i<n;++i) {
            total += gas[i]-cost[i];
            if (total<=subsum) {
                subsum=total;
                start=i+1;
            }
        }
        if(total<0)
        {
            return -1;
        }
        else
        {
            return start%n;
        }
    }
};