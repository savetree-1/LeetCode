class Solution {
public:

string largestPalindromic(string num) {
    unordered_map<char,int> freq;
    for(char c : num) freq[c]++;
    string left = "";
    char middle = 0;
    for(char c = '9'; c >= '0'; c--) if(freq[c] % 2 == 1){middle=c;freq[c]--;break;}
    for(char c = '9'; c >= '0'; c--) if(freq.count(c)) left += string(freq[c]/2, c);
    while(left.size() > 0 && left[0]=='0') left.erase(left.begin());
    string right = left;
    reverse(right.begin(), right.end());
    if(left.empty() && middle==0) return "0";
    if(left.empty() && middle!=0) return string(1, middle);
    return left + (middle ? string(1,middle) : "") + right;
}
};