class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=1;int high=arr.size()-2;int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            ans=mid;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return mid;
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])low=mid+1;
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])high=mid-1;
        }
        return ans;
    }
};