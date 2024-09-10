/*
By   :-: savetrees
Used :-: Linked Lists
*/
class Solution {
public:
    int gcd(int a, int b) {while(b){int r=a%b;a=b;b=r;}return a;}
    ListNode* insertGreatestCommonDivisors(ListNode* son) {
        for(ListNode* tmp=son;tmp&&tmp->next;tmp=tmp->next->next){
            ListNode* gcdNode = new ListNode(gcd(tmp->val, tmp->next->val));
            gcdNode->next = tmp->next;
            tmp->next = gcdNode;}
        return son;}};
