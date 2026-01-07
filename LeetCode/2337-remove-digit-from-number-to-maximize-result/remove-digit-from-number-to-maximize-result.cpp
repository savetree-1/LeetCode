class Solution {
public:
    string removeDigit(string number, char digit) {
        int first=0;
        int idx=0;
        for(int i=0;i<number.size();i++)
        {
            if(number[i]==digit )
            {
                if(number[i]<number[i+1])
                {
                    first=i;
                    number.erase(first,1);
                    return number;
                }
                idx=i;
            }
        }
        number.erase(idx,1);
        return number;
    }
};