class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if (f.size()==1) {
            return f[0]==0||n==0;
        }
        if (f.size()>1&&f[0]!=1&&f[1]!=1) {
            f[0]=1;
            n--;
        }
        if (f.size()>1&&f[f.size()-1]!=1&& f[f.size()-2] != 1) {
            f[f.size() -1] = 1;
            n--;
        }
        for (int i = 1; i < f.size() - 1; i++) {
            if (f[i-1]!=1&& f[i]!=1&& f[i + 1]!= 1) {
                f[i] = 1;
                n--;
            }
        }
        return n<= 0;
    }
};