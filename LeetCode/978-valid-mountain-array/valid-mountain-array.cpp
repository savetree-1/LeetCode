class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return false;
        int check=0;
        int count=0;
        for(int i=1;i<n-1;i++)
        {
            if(arr[i-1]<arr[i] && arr[i]<arr[i+1])
            {
                count++;
            }
            else if(arr[i-1]>arr[i] && arr[i]>arr[i+1])
            {
                count++;
            }
            else if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
            {
                count++;
                check++;
            }
        }
        if(count==n-2 && check==1)return true;
        return false;
    }
};