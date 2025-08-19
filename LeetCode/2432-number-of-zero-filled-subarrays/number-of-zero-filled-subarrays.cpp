class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
       vector<int>size;
       long long acc=0;
       int count=0;
       for(int i=0;i<nums.size();i++)
       {
         if(nums[i]==0)
         {
            count++;
         }
         else
         {
            if(count!=0)size.push_back(count);
            count=0;
         }
       }
       if(count!=0)size.push_back(count);
       for(int num:size)
       {
        acc+=(1LL*num*(num+1))/2;
       } 
       return acc;
    }
};