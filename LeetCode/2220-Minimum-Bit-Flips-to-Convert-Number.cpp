/*
by   :-: savetrees
used :-: Bit Manipulation
*/
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int son = 0;
        while(start>0 || goal>0){
            int a=start & 1,
                b=goal&1;
             if(a!=b)++son;
            start>>= 1;
            goal>>= 1;}
        return son;}};