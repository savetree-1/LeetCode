class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int count = n*n;
        int startRow = 0, startCol = 0, endRow = n-1, endCol = n-1;
        int temp = 1;
        while(temp <= count){
            for(int idx = startCol; idx <= endCol && temp <= count; idx++){
                matrix[startRow][idx] = temp;
                temp++;
            }
            startRow++;
            for(int idx = startRow; idx <= endRow && temp <= count; idx++){
                matrix[idx][endCol] = temp;
                temp++;
            }
            endCol--;
            for(int idx = endCol; idx >= startCol && temp <= count; idx--){
                matrix[endRow][idx] = temp;
                temp++;
            }
            endRow--;
            for(int idx = endRow; idx >= startRow && temp <= count; idx--){
                matrix[idx][startCol] = temp;
                temp++;
            }
            startCol++;
        }
        return matrix;
    }
};
