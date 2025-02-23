/*
By   :: savetrees
Used :: Brute-Force
*/
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int>lst;
        for(int i=0;i<rows;i++)
        {
            int min=0;
            int min_val=matrix[i][0];
            int check=true;
            for(int j=1;j<cols;j++)
            {
                if(matrix[i][j]<min_val)
                {
                    min_val=matrix[i][j];
                    min=j;
                }
            }
            for(int j=0;j<rows;j++)
            {
                if(matrix[j][min]>matrix[i][min])check=false;
            }
            if(check)lst.push_back(matrix[i][min]);
        }
        return lst;
    }
};