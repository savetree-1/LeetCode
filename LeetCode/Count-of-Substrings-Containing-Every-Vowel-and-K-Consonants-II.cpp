/*
By   :: savetrees
Used :: HashMap + Sliding Window
*/
class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        long long ans=0;
        int n=word.length();
        set<char>vowel={'a','e','i','o','u'};
        vector<int>cons;
        for(int i=0;i<n;i++)if(vowel.find(word[i])==vowel.end())cons.push_back(i);
        int i=0,j=0,c=0;
        map<int,int>mp;
        while(i<n){
            while(j<n &&( mp.size()<5 || c<k)){
                if(vowel.find(word[j])!=vowel.end())mp[word[j]]++;
                else c++;    
                j++;
            }
            if(mp.size()==5 && c==k){
                int nxt=upper_bound(cons.begin(),cons.end(),j-1)-cons.begin();
                if(nxt==cons.size())nxt=n;
                else nxt=cons[nxt];    
                ans+=nxt-j+1;
            }
            if(vowel.find(word[i])==vowel.end())c--;
            else{
                mp[word[i]]--;
                if(mp[word[i]]==0)mp.erase(word[i]);}
            i++;}
        return ans;}};