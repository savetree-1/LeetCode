/*
By   :: savetrees
Used :: Maths
*/
typedef long long ll;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size=grid.size();
        ll expectedSum=0,expectedSquareSum=0,actualSum=0,actualSquareSum = 0;
        for(int i=1;i<=size*size;i++) {
            expectedSum+=i;
            expectedSquareSum+=(long long)i*i;
        }
        for(auto& row:grid)
            for(int num:row) {
                actualSum+=num;
                actualSquareSum+=(long long)num*num;
            }
        long long diffSum=actualSum-expectedSum,
                  diffSquareSum=actualSquareSum-expectedSquareSum,
                  sumValues=diffSquareSum/diffSum;
        int repeatedValue=(diffSum+sumValues)/2,
            missingValue=sumValues-repeatedValue;
        return {repeatedValue, missingValue};
    }
};
