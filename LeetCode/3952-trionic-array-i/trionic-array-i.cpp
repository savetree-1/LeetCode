class Solution {
public:
    bool isTrionic(vector<int>& nums) {
       bool check1=false;
       bool check2=false;
       bool check3=false;
       int i=0;
       while(i<nums.size()-1 && nums[i]<nums[i+1])
       {
        i++;
       }
       if(i!=0)check1=true;
       int j=i;
       while(j<nums.size()-1 && nums[j]>nums[j+1])
       {
        j++;
       }
       if(check1 && j!=i )check2=true;
       int k=j;
       while(k<nums.size()-1 && nums[k]<nums[k+1])
       {
        k++;
       }
       if(check2 && k!=j && k==nums.size()-1)check3=true;
       return check1 && check2 && check3;
    }
};