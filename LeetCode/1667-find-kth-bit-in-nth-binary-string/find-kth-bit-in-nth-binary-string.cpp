class Solution {
public:
    char findKthBit(int n, int k) {
        string s=build(n);
        return s[k-1];
    }
       string build(int num)
    {
        if(num == 1)
            return "0";
        string prev = build(num - 1);
        string temp = prev;
        reverse(temp.begin(), temp.end());
        for(char &c : temp)
            c = (c == '0') ? '1' : '0';
        return prev + "1" + temp;
    }
};