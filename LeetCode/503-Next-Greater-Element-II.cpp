/*
By   :-: savetrees
Used :-: Brute Force
*/
class Solution {
public:
    vector< int> nextGreaterElements(vector<  int>& nums) {
      vector< int>son(nums.size());
      if(nums.size()==1)return {-1};
      for( int i=0;i<nums.size();i++)
        {
          for( int j=i+1;j<2*nums.size()-1;j++)
          {
            if(nums[j%nums.size()]>nums[i])
            {son[i]=nums[j%nums.size()];break;}
            else 
            son[i]=-1;
          }
        }
        return son;
    }
};