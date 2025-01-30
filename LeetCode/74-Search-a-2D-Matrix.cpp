/*
By  :-: savetrees
Used:-: Binary Search
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        if (row==0||col==0)return false;
        int low=0;
        int high=row*col-1;
        while(low<=high) 
        {
            int mid=low+(high-low)/2;
            int midv=matrix[mid/col][mid%col];
            if (midv==target)
                return true;
            if (midv<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};