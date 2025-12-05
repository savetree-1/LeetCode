class Solution {
public:
    int countPartitions(vector<int>& nums) {
      int sum=accumulate(nums.begin(),nums.end(),0);
      int count=0;
      int n=nums.size();
      for(int i=1;i<n;i++)
      {
        int sum_=accumulate(nums.begin(),nums.begin()+1,0);
        if((sum-2*sum_)%2==0)count++;
      }  
      return count;
    }
};