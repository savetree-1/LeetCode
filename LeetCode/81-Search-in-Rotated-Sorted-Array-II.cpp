/*
By  :-: savetrees
Used:-: Binary Search
*/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        if(n==0)return false;
        if(n==1)return nums[0]==target;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            while(start<mid && nums[start]==nums[mid]){start++;}
            while(end>mid && nums[end]==nums[mid]){end--;}
            if(nums[start]<=nums[mid])
            {
                if(nums[start]<=target && target<nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            else if(nums[mid]<nums[end])
            {
                 if(nums[mid]<target && target<=nums[end])
                 {
                    start=mid+1;
                 }
                 else
                 {
                    end=mid-1;
                 }  
            }
        }
        return false;
    }
};