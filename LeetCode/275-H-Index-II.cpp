/*
By   :: savetrees
Used :: Straight Forward Approach
*/
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int h=0;
        for(int i=0;i<n;i++) {
            int count=n-i;
            if(citations[i]>=count)
            {
                h=count;
                break;
            }
        }
        return h;
    }
};
