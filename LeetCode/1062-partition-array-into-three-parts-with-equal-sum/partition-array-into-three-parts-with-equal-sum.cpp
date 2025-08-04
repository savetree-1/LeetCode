class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=accumulate(arr.begin(), arr.end(), 0);
        if(sum %3!=0) return false;
        int target=sum/3;
        vector<int>forw;
        int sum1=arr[0];
        forw.push_back(sum1);
        int count;
        for(int i=1;i<n;i++) {
            sum1+=arr[i];
            forw.push_back(sum1);
            if(arr[i]==0)count++;
        }
        if(count==arr.size()-1)return true;
        for(int i=0;i<n-2;i++) {
            if(forw[i]==target) {
                for(int j=i+1;j<n-1;j++) {
                    if(forw[j]-forw[i]==target&&sum-forw[j]==target) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
