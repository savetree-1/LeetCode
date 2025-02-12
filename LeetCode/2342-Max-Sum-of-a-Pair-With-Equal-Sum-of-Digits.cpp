/*
By   :: savetrees
Used :: Map & Sorting
*/
class Solution {
public:
    int sum(int num)
    {
        int sum=0;
        while(num!=0)
        {
            sum+=num%10;
            num=num/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i:nums)
        {
            mpp[sum(i)].push_back(i);            
        }
        int maxi=-1;
        for(auto& pair:mpp)
        {
            vector<int>&numbers=pair.second;
            if(numbers.size()>=2)
            {
                sort(numbers.begin(),numbers.end(),greater<int>());
                maxi=max(maxi,numbers[0]+numbers[1]);
            }
        }
    return maxi;
    }
};