/*
By   :: savetrees
Used :: 2-Pointer Merging
*/
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>&a,vector<vector<int>>&b){
        vector<vector<int>>r;
        int i=0,j=0;
        while(i<a.size()&&j<b.size()){
            if(a[i][0]==b[j][0])r.push_back({a[i][0],a[i][1]+b[j][1]}),i++,j++;
            else if(a[i][0]<b[j][0])r.push_back(a[i++]);
            else r.push_back(b[j++]);
        }
        while(i<a.size())r.push_back(a[i++]);
        while(j<b.size())r.push_back(b[j++]);
        return r;
    }
};