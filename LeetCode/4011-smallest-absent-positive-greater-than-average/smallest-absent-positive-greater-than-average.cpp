class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        float avg=sum/n*(1.0);
        avg = floor(avg) + 1;
        while(1)
        {
            if(find(nums.begin(),nums.end(),avg)!=nums.end())
            {
                avg++;
            }
            else
            {
                break;
            }
        }
        if (avg <= 0)
    avg = 1;

while (find(nums.begin(), nums.end(), avg) != nums.end()) {
    avg++;
}

return avg;
    }
};