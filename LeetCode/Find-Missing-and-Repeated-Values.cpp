/*
By   :: savetrees
Used :: Maths
*/
typedef long long ll;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size=grid.size();
        ll sum_1=0,sumsq_1=0,sum_2=0,sumsq_2=0;
        for(int i=1;i<=size*size;i++) {
            sum_1+=i;
            sumsq_1+=(ll)i*i;
        }
        for(auto& row:grid)
            for(int num:row){
                sum_2+=num;
                sumsq_2+=(ll)num*num;
            }
        ll diff_sum=sum_2-sum_1,
                  diffsq_sum=sumsq_2-sumsq_1,
                  sumValues=diffsq_sum/diff_sum;
        int reptd=(diff_sum+sumValues)/2,
            missing=sumValues-reptd;
        return {reptd,missing};
    }
};
