/*
By  :-: savetrees
Used:-: StraightForward Approach
*/
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        string p = "";
        for(int i=0;i<s1.length();i++){
            if(s1[i]!= ' ')
                p+=s1[i];
            else{
                mp[p]++;
                p="";}}
        mp[p]++;
        p = "";
        for(int i=0;i<s2.length();i++){
            if(s2[i]!= ' ')
                p+=s2[i];
            else{
                mp[p]++;
                p="";} }
        mp[p]++;
        for(auto val : mp){
            if(val.second == 1)
                ans.push_back(val.first);}
        return ans;}};