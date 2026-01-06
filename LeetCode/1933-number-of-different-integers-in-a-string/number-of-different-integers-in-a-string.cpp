// class Solution {
// public:
//     int numDifferentIntegers(string word) {
//         set<int>stt;
//         string s="";
//         for(int i=0;i<word.size();i++)
//         {
//             if(word[i]>='a' &&word[i]<='z')
//             {
//                 if(s.size()!=0)stt.insert(stoi(s));
//                 s="";
                
//             }
//             else
//             {
//                 s+=word[i];
//             }
//         }
//         if(s.size()!=0)stt.insert(stoi(s));
//         return stt.size();
//     }
// };
class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> stt;
        string s = "";
        
        for (char c : word) {
            if (isdigit(c)) {
                s += c;
            } else {
                if (!s.empty()) {
                    while (s.size() > 1 && s[0] == '0') s.erase(0,1);
                    stt.insert(s);
                    s = "";
                }
            }
        }
        
        if (!s.empty()) {
            while (s.size() > 1 && s[0] == '0') s.erase(0,1);
            stt.insert(s);
        }
        
        return stt.size();
    }
};
