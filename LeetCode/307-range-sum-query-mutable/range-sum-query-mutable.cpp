class NumArray {
public:
    vector<int>bit,arr;
    int n;
    NumArray(vector<int>& nums) {
        n=nums.size();
        bit.resize(n+1,0);
        arr=nums;
        for(int i=0;i<n;i++)
        {
            updateBIT(i+1,nums[i]);
        }
    }
    void updateBIT(int idx,int val)
    {
        while(idx<=n)
        {
            bit[idx]+=val;
            idx+= idx&(-idx);
        }
    }
    int sumBIT(int idx)
    {
        int s=0;
        while(idx>0)
        {
            s+=bit[idx];
            idx-=idx&(-idx);
        }
        return s;
    }
    void update(int index, int val) {
        int diff=val-arr[index];
        arr[index]=val;
        updateBIT(index+1,diff); 
    }
    
    int sumRange(int left, int right) {
        return sumBIT(right+1)-sumBIT(left);
    }
};

