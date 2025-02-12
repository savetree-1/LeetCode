/*
By   :: savetrees
Used :: In place Addition of Max in Unordered Map
*/
class Solution {
public:
    int sum(int num){
        int sum=0;
        while (num!=0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int maxi=-1;
        for (int i:nums) {
            int dummy=sum(i);
            if (mpp.find(dummy)!=mpp.end()) {
                maxi=max(maxi,mpp[dummy]+i);
                mpp[dummy]=max(mpp[dummy],i);
            } else {
                mpp[dummy]=i;
            }
        }
        return maxi;
    }
};