/*
By   :: savetrees
Used :: Sliding Window
*/
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int nw=0;
        int nb=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W')nw++;
            if(blocks[i]=='B')nb++;
        }
        int low=0, high=k-1, mini=nw;
        while(high+1 < blocks.size()){
            if(blocks[low]=='W')nw--;
            low++;
            high++;
            if(blocks[high]=='W')nw++;
            mini=min(mini,nw);
        }
        return mini;
    }
};
