class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return 0;
        int ans=0;
        int low=1;
        while(low<n-1){
            if(arr[low-1]<arr[low]&&arr[low] > arr[low+1]) {
                int l=low,r=low;
                while(l > 0&&arr[l-1]<arr[l])l--;
                while(r<n-1&&arr[r]>arr[r+1])r++;
                ans=max(ans, r - l + 1);
                low=r; 
            } else {
                low++;
            }
        }
        return ans;
    }
};
