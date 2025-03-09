/*
By   :: savetrees
Used :: Sliding Window
*/
class Solution{public:
    int numberOfAlternatingGroups(vector<int>& col,int k){
        int len=1,res=0,last=col[col.size()-1];
        for(int i=1;i<col.size();++i)
            if(col[i]!=col[i-1]&&++len>=k)++res;
            else if(col[i]==col[i-1])len=1;
        for(int i=0;i<k-1;++i)
            if(col[i]!=last){if(++len>=k)++res;last=col[i];}
            else len=1;
        return res;
    }
};
