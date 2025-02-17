class Solution {
    void solver(string tiles, int& ans,vector<bool>&visi){
        for(int i=0;i<tiles.size();i++){
            if(visi[i] ||i>0 && tiles[i]== tiles[i-1]&& visi[i-1]==false) continue;
            visi[i]=true;
            ans++;
            solver(tiles, ans, visi);
            visi[i]=false;
        }
    }
public:
    int numTilePossibilities(string tiles) {
         vector<bool> visi(tiles.size(),false);
         sort(tiles.begin(),tiles.end());
         int ans=0;
         solver(tiles, ans, visi);
         return ans;
    }
};