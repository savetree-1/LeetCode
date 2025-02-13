/*
By   :: savetrees
Used :: Merge Sort
*/
class Solution {
public:
void mergeCount(vector<pair<int,int>>& nums,vector<int>&count,int left,int mid, int right){
    vector<pair<int,int>>temp(right-left+1);
    int i =left,j=mid+1,k=0,cnt=0;
    while (i<=mid&&j<=right){
        if (nums[i].first<=nums[j].first){
            count[nums[i].second]+=cnt;
            temp[k++]=nums[i++];
        } else {
            cnt++;
            temp[k++]=nums[j++];
        }
    }
    while (i <= mid) {
        count[nums[i].second] += cnt;
        temp[k++] = nums[i++];
    }
    while (j<=right)temp[k++]=nums[j++];
        for (int p=0;p<temp.size();p++)nums[left+p]=temp[p];
}
void mergeSort(vector<pair<int, int>>& nums,vector<int>&count,int left,int right)
{
    if (left>=right) return;
    int mid=left+(right-left)/2;
    mergeSort(nums,count,left,mid);
    mergeSort(nums,count,mid+1,right);
    mergeCount(nums,count,left,mid,right);
}
vector<int>countSmaller(vector<int>& nums) {
    int n=nums.size();
    vector<pair<int, int>> numIndex;
    for (int i=0;i<n;i++)numIndex.push_back({nums[i],i});
    vector<int>count(n,0);
    mergeSort(numIndex,count,0,n-1);
    return count;
}
};
