/*
By   :-: savetrees
Used :-: Singly Linked List 
*/
class Solution {
public:
    vector<int> di = {0,1,0,-1}, dy = {1,0,-1,0};
    int curD = 0, i = 0, y = 0;
    vector<vector<int>> ans;
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ans = vector<vector<int>>(m, vector<int>(n, -1));
        while (head){
            int nextI = i + di[curD], nextY = y + dy[curD];
            if (nextI < 0 || nextI >= m || nextY < 0 || nextY >= n ||
                ans[nextI][nextY] != -1){
                curD = (curD + 1) % di.size();
                nextI = i + di[curD], nextY = y + dy[curD];
            }
            ans[i][y] = head->val;
            head = head->next;
            i = nextI, y = nextY;
        }
        return ans;
    }
};