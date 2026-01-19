class Solution {
public:
    bool check(vector<vector<int>>& mat, int len, int threshold)
    {
        int rows = mat.size();
        int cols = mat[0].size();

        for (int i = len - 1; i < rows; i++)
        {
            for (int j = len - 1; j < cols; j++)
            {
                int sum = mat[i][j];
                if (i - len >= 0) sum -= mat[i - len][j];
                if (j - len >= 0) sum -= mat[i][j - len];
                if (i - len >= 0 && j - len >= 0)
                    sum += mat[i - len][j - len];

                if (sum <= threshold)
                    return true;
            }
        }
        return false;
    }

    int maxSideLength(vector<vector<int>>& mat, int threshold)
    {
        int rows = mat.size();
        int cols = mat[0].size();

        for (int i = 0; i < rows; i++)
            for (int j = 1; j < cols; j++)
                mat[i][j] += mat[i][j - 1];

        for (int i = 0; i < cols; i++)
            for (int j = 1; j < rows; j++)
                mat[j][i] += mat[j - 1][i];

        int low = 1, high = min(rows, cols), ans = 0;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (check(mat, mid, threshold))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};
