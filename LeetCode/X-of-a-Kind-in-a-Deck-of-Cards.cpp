class Solution {
public:
    int gcd(int a,int b)
    {
        if(b==0)return a;
        return gcd(b,a%b);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mpp;
        for(int num:deck)mpp[num]++;
        int sz=mpp.size();
        int count=0;
        for(auto &pair:mpp){
            count=gcd(count,pair.second);
        }
        return count>=2;
    }
};