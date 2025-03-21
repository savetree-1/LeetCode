class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) 
    {
        vector<string>ans;
        int n=recipes.size();
        unordered_map<string,int>m;
        vector<int>v(n,0);
        for(auto it:supplies)
        {
            m[it]++;
        }
        // for(auto it:recipes)
        // {
        //     m[it]++;
        // }
        while(n--)
        {
            int check=0;
            for(int i=0; i<ingredients.size(); i++)
            {
                int flag=0;
                if(v[i]==1)
                continue;
                for(int j=0; j<ingredients[i].size(); j++)
                {
                    if(m.find(ingredients[i][j])==m.end())
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    check++;
                    ans.push_back(recipes[i]);
                    m[recipes[i]]++;
                    v[i]=1;
                }
                
                // m[recipes[i]]++;
            }  
            if(check==0)
            break;
        }
        
        return ans;  
    }
};