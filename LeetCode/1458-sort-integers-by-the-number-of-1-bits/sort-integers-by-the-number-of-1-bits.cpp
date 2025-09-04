class Solution {
public:
    static int bitCount(int num)
    {
        int cnt=0;
        while(num){
            cnt+=num&1;
            num>>=1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
      sort(arr.begin(),arr.end(),cmp);
      return arr;  
    } 
     static bool cmp(int a, int b) {
        int ca = bitCount(a), cb = bitCount(b);
        if(ca == cb) return a < b;
        return ca < cb;
    }

};