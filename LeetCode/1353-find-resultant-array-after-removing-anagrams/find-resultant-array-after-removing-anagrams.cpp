
class Solution {
public:
    bool isAnagram(string str1, string str2) {
        if(str1.length() != str2.length()) return false;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        return str1 == str2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        if(words.empty()) return {};
        vector<string> result;
        result.push_back(words[0]);

        for(int i = 1; i < words.size(); i++) {
            if(!isAnagram(words[i], result.back())) {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};


