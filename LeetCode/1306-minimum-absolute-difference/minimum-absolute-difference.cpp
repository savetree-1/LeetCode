class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini=1e9;
        vector<vector<int>>ar;
        for(int i=1;i<arr.size();i++)
        {
            mini=min(mini,arr[i]-arr[i-1]);
        }
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==mini)
            {
                ar.push_back({arr[i-1],arr[i]});
            }
        }
        return ar;
    }
};