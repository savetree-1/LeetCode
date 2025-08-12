class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if(sum % 3 != 0) return false;
        int target = sum / 3;
        
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) count++;
        }
        if(count == n - 1) return true;

        int currSum = 0;
        int partsFound = 0;
        
        for(int i =0;i< n;i++) {
            currSum+=arr[i];
            if(currSum==target) {
                partsFound++;
                currSum=0;
                if(partsFound==2&&i<n-1)return true;
            }
        }
        return false;
    }
};
