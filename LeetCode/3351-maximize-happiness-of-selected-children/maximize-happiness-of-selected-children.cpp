class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long sum=0;
        for(int i=0;i<k;i++)
        {
            if((happiness[i]-i)>=0){happiness[i]-=i;
            sum+=happiness[i];}
            else break;
        }
        return sum;
        
    }
};
//  1 2 3 4 5 6 7 8  5
//  0 1 2 3 4 5 6 8 5
//  0 0 1 2 3 4 6 8 5
//  0 0 0 1 2 4 6 8 5
//  0 0 0 0 2 4 6 8 5
