class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
    vector<int> s;
    if (arr.empty() || arr[0].empty()) return s;
    int left=0;
    int right=arr[0].size()-1;
    int top=0;
    int bottom=arr.size()-1;
    while(left<=right && top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            s.push_back(arr[top][i]);
        }top++;

        for(int i=top;i<=bottom;i++)
        {
            s.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                s.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(right>=left)
        {
            for(int i=bottom;i>=top;i--)
            {
                s.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return s;  }};