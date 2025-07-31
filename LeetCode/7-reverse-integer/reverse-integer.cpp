class Solution {
public:
    int reverse(int x) {
        long long cnt = 0;
        while(x != 0){
            int a = x % 10;
            cnt = cnt * 10 + a;
            x /= 10;
        }
        if(cnt > INT_MAX || cnt < INT_MIN) return 0;
        return cnt;
    }
};
