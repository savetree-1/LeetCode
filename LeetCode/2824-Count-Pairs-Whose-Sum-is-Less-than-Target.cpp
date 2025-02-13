/*
By   :: savetrees
Used :: Binary Search
*/
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int count=0,n=nums.size();
        for(int i=0;i<n-1;i++) {
            int start=i+1,end=n-1,pos=i;  
            while(start<=end){
                int mid=(start+end)/2;
                if(nums[i]+nums[mid]<target) {
                    pos=mid;
                    start=mid+1; 
                } else {
                    end=mid-1;  
                }
            }
            count+=pos-i; 
        }
        return count;
    }
};