class Solution {
public:
    int maxProfit(vector<int>& prices) {
       vector<int>prof;
       int sum=0;
       for(int i=1;i<prices.size();i++)
       {
        prof.push_back(prices[i]-prices[i-1]);
        if(prices[i]-prices[i-1]>=0)sum+=prices[i]-prices[i-1];
       } 
       return sum;
    }
};