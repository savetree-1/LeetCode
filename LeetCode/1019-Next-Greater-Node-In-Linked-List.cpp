/*
By  :-: savetrees
Used:-: Linked List
*/
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head){
        vector<int>dummy;
        ListNode*temp=head;
        while (temp!=NULL){
            ListNode*iter=temp->next;
            while (iter!=NULL&&iter->val<=temp->val){
                iter=iter->next;
            }
            if(iter!=NULL){
                dummy.push_back(iter->val);
            } else{
                dummy.push_back(0);
            }
            temp=temp->next;
        }
        return dummy;
    }
};
