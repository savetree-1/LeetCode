class Solution {
public:
    int mirrorDistance(int n) {
    string s=to_string(n);
    string result="";
    for(int i=s.length()-1;i>=0;i--)
    {
        result+=s[i];
    }
    return abs(stoi(result)-n);}
};