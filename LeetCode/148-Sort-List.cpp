/*
By  :-: savetrees
Used:-: Linked List
*/
class Solution {
public:
    ListNode* sortList(ListNode* head) 
    {
        if (head==NULL||head->next==NULL)return head;
        ListNode*mid=find_mid(head);
        ListNode* head_2=mid->next;
        mid->next=NULL;
        ListNode*left=sortList(head);
        ListNode*right=sortList(head_2);
        return merge(left,right);
    }
private:
    ListNode*find_mid(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast&&fast->next) 
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode*merge(ListNode*l1,ListNode*l2) {
        ListNode*dummy=new ListNode(0);
        ListNode*tail=dummy;
        while (l1&&l2) 
        {
            if(l1->val<l2->val)
            {
                tail->next=l1;
                l1=l1->next;
            } 
            else
            {
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        tail->next=l1?l1:l2;
        return dummy->next;
    }
};
