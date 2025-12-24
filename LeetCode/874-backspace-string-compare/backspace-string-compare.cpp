class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>st1;
       stack<char>st2;
       for(int i=0;i<s.size();i++)
       {
            if(s[i]!='#')st1.push(s[i]);
            if(!st1.empty() && s[i]=='#')st1.pop();
       }
       for(int i=0;i<t.size();i++)
       {
            if(t[i]!='#')st2.push(t[i]);
            if(!st2.empty() && t[i]=='#')st2.pop();
       }
       if(st1.size()!=st2.size())return false;
       int n=st1.size();
       for(int i=0;i<n;i++)
       {
        char a=st1.top();
        st1.pop();
        char b=st2.top();
        st2.pop();
        if(a!=b)return false;
       }
       return true;
    }
};