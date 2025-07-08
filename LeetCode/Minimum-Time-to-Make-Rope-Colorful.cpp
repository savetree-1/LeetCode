class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int total=0;
        int n=colors.length();
        for(int i=1;i<n;i++)
        {
            if(colors[i]==colors[i-1])
            {
                if(neededTime[i]<neededTime[i-1])
                {
                    total+=neededTime[i];
                    neededTime[i]=neededTime[i-1];
                }
                else
                {
                    total+=neededTime[i-1];
                }
            }
        }
        return total;
    }
};