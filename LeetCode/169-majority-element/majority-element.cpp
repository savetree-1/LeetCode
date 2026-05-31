class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int check=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++)
        { 
           if(count==0)
           {
            check=nums[i];
           } 
           if(nums[i]==check) 
           {
            count++;
           }
           else 
           {
            count--;
           }
        }
        return check;
    }
};