/*
By   :-: savetrees
Used :-: Sorting
*/
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> son;
        for(int num: nums){
            son.push_back(to_string(num));}
        sort(son.begin(), son.end(), [](string &s1, string&s2) {
            return s1 + s2 > s2 + s1;});
        if(son[0]==\0\) return\0\;
        string grtNum;
        for(string &str: son){grtNum += str;}
        return grtNum;}};