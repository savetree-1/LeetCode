/*
By   :: savetrees
Used :: Stack
*/
class Solution {
public:
    string FIFO(stack<int>& stk) {
        if (stk.empty()) return "";  
        char top=stk.top();
        stk.pop();
        string s=FIFO(stk);  
        s+=top;   
        stk.push(top);  
        return s;
    }
    string clearDigits(string s) {
        stack<int> st;
        for (char ch:s) {
            if (!st.empty() && isdigit(ch))st.pop();
            else st.push(ch);
        }
        return FIFO(st);
    }
};