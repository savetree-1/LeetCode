class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int nw = 0, mini = k;
        for(int i = 0; i < k; i++) if(blocks[i] == 'W') nw++;
        mini = nw;
        for(int i = k; i < blocks.size(); i++) {
            if(blocks[i-k] == 'W') nw--;
            if(blocks[i] == 'W') nw++;
            mini = min(mini, nw);
        }
        return mini;
    }
};
