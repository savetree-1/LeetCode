class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        for(int i=0;i<magazine.size();i++){
            mpp[magazine[i]]++;
        }
        for( char ch:ransomNote){
            if(mpp[ch]<1)return false;
            mpp[ch]--;
        }
        return true;
    }
};