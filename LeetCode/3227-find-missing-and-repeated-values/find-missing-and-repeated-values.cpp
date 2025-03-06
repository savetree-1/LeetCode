class Solution{public:vector<int> findMissingAndRepeatedValues(vector<vector<int>>&grid){ 
    int n=grid.size(); 
    long long S=0,P=0,S_actual=0,P_actual=0; 
    for(int i=1;i<=n*n;i++){S+=i;P+=(long long)i*i;} 
    for(auto&row:grid)for(int num:row){S_actual+=num;P_actual+=(long long)num*num;} 
    long long D=S_actual-S,Q=P_actual-P,S2=Q/D; 
    int repeated=(D+S2)/2,missing=S2-repeated; 
    return{repeated,missing}; 
}};
