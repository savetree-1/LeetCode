class Solution{public:
    bool isPrime(int num){if(num<2)return false;for(int i=2;i*i<=num;i++)if(num%i==0)return false;return true;}
    vector<int>closestPrimes(int left,int right){
        int prev=-1,a=-1,b=-1,min_diff=INT_MAX;
        if(left<=2){prev=2;left=3;} // Handle 2 separately
        if(left%2==0)left++; // Skip even numbers
        for(int i=left;i<=right;i+=2){
            if(isPrime(i)){
                if(prev!=-1&&i-prev<min_diff){a=prev;b=i;min_diff=i-prev;}
                prev=i;
            }
        }
        return a==-1?vector<int>{-1,-1}:vector<int>{a,b};
    }
};
