/*
By  :-: savetrees
Used:-: Using Binary Search
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;
        while(low<high)
        {
            if(numbers[low]+numbers[high]>target)high--;
            else if(numbers[low]+numbers[high]<target)low++;
            else return {low+1,high+1};
        }
        return {};
    }
};