class Solution {
public:
    bool isPrime(int n)
    {
        if(n<2)return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;

    }
    int diagonalPrime(vector<vector<int>>& nums) {
    int maxi=0;
    int cols=nums[0].size();
        for(int i=0;i<nums.size();i++)
        {
            if(isPrime(nums[i][i]))
            {
                maxi=max(maxi,nums[i][i]);
            }
            if(isPrime(nums[i][cols-i-1]))
            {
                maxi=max(maxi,nums[i][cols-i-1]);
            }
        }
        return maxi;
    }
};