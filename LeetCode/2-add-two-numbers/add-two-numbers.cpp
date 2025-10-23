/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 100
  10
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        ListNode* dummy=l3;
        int carry=0;
        int sum=0;
        while(l1!=NULL|| l2!=NULL || carry!=0 )
        {
            sum=carry;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            int digit=sum%10;
            dummy->next=new ListNode(digit);
            dummy=dummy->next;
        }
        return l3->next;

    }
};