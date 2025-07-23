class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0, h=letters.size()-1, mid;
        char ans = letters[0]; // initialize to handle wrap-around
        while(l<=h){
            mid = l + (h - l) / 2;
            // if(letters[mid]==target){
            //     return letters[mid+1]; // ❌ this can go out of bounds and isn't always correct
            // }
            if(letters[mid] > target){
                ans = letters[mid];
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
