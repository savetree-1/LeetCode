class Solution {
public:
    int binaryGap(int n) {
        bool prev = false;
        int gap = 0;
        int max_gap = 1;
        int adj = 0;
        while(n){
            if(n & 1){
                prev = true;
                gap = 1;
                adj++;
            }
            else if(prev){
                gap++;
                max_gap = max(max_gap, gap);
            }
            n = n >> 1;
        }

        return adj>1?max_gap:0;
    }
};