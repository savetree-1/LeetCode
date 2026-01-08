class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool b=false;
        bool h=false;
        if(mass>=100)h=true;
        if(log10(width)>=4||log10(height)>=4||log10(length)>=4)b=true;
        else if(log10(width)+log10(height)+log10(length)>=9)b=true;
        if(b==true && h==true)return "Both";
        else if(b==false && h==false)return "Neither";
        else if(b==true && h==false)return "Bulky";
        else return "Heavy";
    }
};