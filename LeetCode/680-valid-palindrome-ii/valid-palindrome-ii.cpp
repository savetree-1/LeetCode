class Solution {
public:
    bool check(string s)
    {
        int low=0;
        int high=s.length()-1;
        int check=0;
        while(low<=high)
        {
            if(s[low]==s[high])
            {
                low++;
                high--;
            }
            else if(check==0)
            {
                if(s[low+1]==s[high])low++;
                else high--;
                check=1;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool check2(string s)
    {
        int low=0;
        int high=s.length()-1;
        int check=0;
        while(low<=high)
        {
            if(s[low]==s[high])
            {
                low++;
                high--;
            }
            else if(check==0)
            {
                if(s[high-1]==s[low])high--;
                else low++;
                check=1;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        return check(s)|| check2(s);
        
    }
};