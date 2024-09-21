/*
By   ::  savetrees
Used :: Two-Pointer Approach
*/
class Solution {
public:
    static bool comp(string & a,string& b){
          int i=0,j=0;
          while(i<a.size() and j<b.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                return a[i]<b[i];
            }
          }
          if(i<a.size() or j<b.size())return a.size() < b.size();
          return a[0]<b[0];
    }
    vector<int> lexicalOrder(int n) {
        vector<string>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(to_string(i));
        }
        sort(ans.begin(),ans.end(),comp);
        vector<int>v;
        for(int i=0;i<ans.size();i++){
            v.push_back(stoi(ans[i]));
        }
        return v;
    }
};