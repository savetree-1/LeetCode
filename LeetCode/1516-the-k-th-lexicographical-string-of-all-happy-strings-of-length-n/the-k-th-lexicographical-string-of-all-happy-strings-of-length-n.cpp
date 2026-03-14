class Solution {
public:
    void util(char lastChar, string curr, int& kcurr, int n, int k, string& res){
        if(curr.size()==n){
            kcurr++;
            if(kcurr==k) res=curr;
            return;
        }
        if(lastChar!='a') util('a', curr+'a', kcurr, n, k, res);
        if(res!="") return;
        if(lastChar!='b') util('b', curr+'b', kcurr, n, k, res);
        if(res!="") return;
        if(lastChar!='c') util('c', curr+'c', kcurr, n, k, res);
        if(res!="") return;
        return;
    }
    string getHappyString(int n, int k) {
        string res="";
        int kcurr=0;
        util('d', "", kcurr, n, k, res);  
        return res;  
    }
};