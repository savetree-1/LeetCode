/*
By   :-: savetrees
Used :-: Boolean Array
*/
class Solution{
public:
    int countConsistentStrings(string son, vector<string>& words){
        int ct = 0;
        bool allowed[26] = {0};
        for(char ch : son) allowed[ch - 'a'] = 1;
        for(int i = 0; i < words.size(); i++){
            int consistent = 1;
            for(int j = 0; j < words[i].length(); j++){
                allowed[words[i][j] - 'a'] ? 0 : (consistent = 0, j = words[i].length());}
            consistent?ct++ : 0;}
        return ct;}};
