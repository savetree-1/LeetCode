class Solution {
public:
    bool isPrime(int num) {
        if(num<2)return false;
        for(int i=2;i*i<=num;i++) {
            if(num%i==0)return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>record;
        if(left==2||left==1)record.push_back(2);
        if(left%2==0)left++;
        for(int i=left;i<=right;i+=2) {
            if(isPrime(i))record.push_back(i);
        }
        if(record.size()<2)return{-1,-1};
        int min_diff=INT_MAX,a,b;
        for(int i=1;i<record.size();i++) {
            if(record[i]-record[i-1]<min_diff) {
                a=record[i-1];
                b=record[i];
                min_diff=record[i]-record[i-1];
            }
        }
        return{a,b};
    }
};
