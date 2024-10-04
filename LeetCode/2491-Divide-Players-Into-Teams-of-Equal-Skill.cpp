/*
By    :-: savetrees
Used  :-: Two-Pointer
*/
#define ll long long 
class Solution {
public:
    ll dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size(), i = 0, j = n - 1, tgt = skill[0] + skill[j];
        ll sumChem = 0;
        while(i < j){
            if(skill[i] + skill[j] != tgt) return -1;
            sumChem += skill[i++] * skill[j--];}
        return sumChem;}};
