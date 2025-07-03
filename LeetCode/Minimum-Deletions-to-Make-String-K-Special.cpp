/*
By   :: savetrees
Used :: Hashing
*/
class Solution {
public:
    int minimumDeletions(string word, int k){
        int freq[26]={};
        for(char ch:word)freq[ch-'a']++;
        vector<int>arr;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0)arr.push_back(freq[i]);
        }
        sort(arr.begin(),arr.end());
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
        
            int rem=0;
            for(int j=0;j<i;j++)rem+=arr[j];
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[j]>arr[i]+k)rem+=arr[j]-(arr[i]+k);
            }
            ans=min(ans,rem);
        }
        return ans;
    }

};