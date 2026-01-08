class Solution {
public:
    int countTime(string time) {
        int x=1;
        int y=1;
        if(time[0]=='?' && time[1]=='?')x=24;
        else if(time[0]=='?')
        {
            if(time[1]<'4' && time[1]>='0')
            {
                x=3;
            }
            else if(time[1]>='4')
            {
                x=2;
            }
        }
        else if(time[1]=='?')
        {
            if(time[0]<'2')
            {
                x*=10;
            }
            else
            {
                x*=4;
            }
        }
        if(time[3]=='?' && time[4]=='?')
        {
            y=60;
        }
        else if(time[3]=='?')
        {
            y*=6;
        } 
        else if(time[4]=='?')
        {
            y*=10;
        }
        return x*y;
    }
};