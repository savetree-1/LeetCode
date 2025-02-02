/*
By  :-: savetrees
Used:-: Straight Forward 
*/
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int maxi=0;
        int mini=a[0];
        for(int i=1;i<a.size();i++)
        {
            maxi=max(maxi,a[i]-mini);
            mini=min(mini,a[i]);
        }
        return maxi;
        }};