class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n, vector<int>(n));
        int count = n*n;
        int left=0,top=0,right= n-1,bottom= n-1;
        int temp=1;
        while(temp <= count){
            for(int idx = top; idx <= bottom && temp <= count; idx++){
                matrix[left][idx]=temp;
                temp++;
            }
            left++;
            for(int idx =left;idx<=right&&temp<=count;idx++){
                matrix[idx][bottom] = temp;
                temp++;
            }
            bottom--;
            for(int idx = bottom;idx>=top&&temp<=count;idx--){
                matrix[right][idx] = temp;
                temp++;
            }
            right--;
            for(int idx = right;idx>=left&&temp<=count;idx--){
                matrix[idx][top] = temp;
                temp++;
            }
            top++;
        }
        return matrix;
    }
};
