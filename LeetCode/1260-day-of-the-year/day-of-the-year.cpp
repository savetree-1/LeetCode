class Solution {
public:
    int dayOfYear(string dat) {
    int day   = stoi(dat.substr(8, 2));
    int month = stoi(dat.substr(5, 2));
    int year  = stoi(dat.substr(0, 4));
    vector<int> days = {0,31,28,31,30,31,30,31,31,30,31,30};
    for(int i=1;i<12;i++)
    {
        days[i]+=days[i-1];
    }
    bool leap=(year%400==0 || year%4==0 && year%100!=0);
    if(leap && month>2)
    {
        return (days[month-1]+day+1); 
    }
    return days[month-1]+day;
    }
};