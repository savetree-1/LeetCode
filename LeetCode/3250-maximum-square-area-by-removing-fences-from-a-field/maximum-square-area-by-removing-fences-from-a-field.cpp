class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& h, vector<int>& v) {
        // sort(h.begin(),h.end());
        // sort(v.begin(),v.end());
        // int maxih=h[h.size()-1];
        // int maxiv=v[v.size()-1];
        // // int maxih=*max_element(h.begin(),h.end());
        // // int maxiv=*max_element(v.begin(),v.end());
        // bool pos=false;
        // int hi=h.size()-1;
        // int vi=v.size()-1;
        // while(hi>=0 || vi>=0)
        // {
        //     if(maxih==maxiv)
        //     {
        //         pos=true;
        //         break;
        //     }
        //     else
        //     {
        //         if(maxih>maxiv)
        //         {
        //             if(hi>=0)maxih=h[--hi];
        //         }
        //         else
        //         {
        //             if(vi>=0)maxiv=v[--vi];
        //         }
        //     }
        // }
        // return pos;

        const int mod =1e9+7;
        long long ans=0;
        h.push_back(1);
        h.push_back(m); 
        v.push_back(1);
        v.push_back(n);
        sort(v.begin(),v.end());
        sort(h.begin(),h.end());
        unordered_set<int>st;
        for(int i=0;i<h.size();i++)
        {
            for(int j=i+1;j<h.size();j++)
            {
                st.insert(h[j]-h[i]);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                int d=v[j]-v[i];
                if(st.count(d))
                {
                    ans=max(ans,1LL*d*d);
                }
            }
        }
        return ans==0?-1:ans%mod;
    }
};