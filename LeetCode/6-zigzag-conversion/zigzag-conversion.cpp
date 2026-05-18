class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1) return s;

        int n = s.size();

        vector<vector<char>> matrix(numRows,
                                    vector<char>(n, ' '));

        int idx = 0;
        int col = 0;
        int gap = numRows - 1;

        while(idx < n)
        {
            for(int row = 0; row < numRows && idx < n; row++)
            {
                matrix[row][col] = s[idx++];
            }

            for(int row = numRows - 2;
                row >= 1 && idx < n;
                row--)
            {
                col++;
                matrix[row][col] = s[idx++];
            }

            col++;
        }

        string ans;

        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] != ' ')
                {
                    ans += matrix[i][j];
                }
            }
        }

        return ans;
    }
};