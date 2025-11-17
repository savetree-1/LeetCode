
class Solution {
public:
struct Node
{
   Node* links[26];
   bool flag=false;
   int cnt=0;
   Node(){
    for(int i=0;i<26;i++){
    links[i]=NULL;}
    int cnt=0;
    flag=false;}};

    
void insert(Node* root,string&a)
{
    Node* curr=root;
    for(auto i:a){
        if(curr->links[i-'a']==NULL){
            Node* newnode=new Node();
            curr->links[i-'a']=newnode;}
        curr=curr->links[i-'a'];
        curr->cnt++;}
    curr->flag=true;}
int q(Node* root,string&a)
{
    Node* curr=root;
    int ans=0;
    for(auto i:a)
    {
        if(curr->links[i-'a']==NULL)return ans;
        curr=curr->links[i-'a'];
        ans+=curr->cnt;}return ans;}
    vector<int> sumPrefixScores(vector<string>& words) {
        Node* root=new Node();
        for(auto i:words)insert(root,i);
        vector<int> ans;
        for(auto i:words)
          ans.push_back(q(root,i));
        return ans;}};