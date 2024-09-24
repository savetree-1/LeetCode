/*
By   :-: savetrees
Used :-: HashMap
*/
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1,vector<int>& arr2) {
        unordered_map<string, bool> prMap;        
        for (int num : arr1) {
            string s1=to_string(num);
            for (int i = 1; i <= s1.length(); ++i) {
                prMap[s1.substr(0, i)] = true;}}
        int ans = 0;
        for (int num : arr2) {
            string s2=to_string(num);
            for (int i = 1; i <= s2.length(); ++i) {
                string sub=s2.substr(0, i);
                if (prMap.find(sub) != prMap.end()) {
                    ans=max(ans, (int)sub.length());}}}
        return ans;}};