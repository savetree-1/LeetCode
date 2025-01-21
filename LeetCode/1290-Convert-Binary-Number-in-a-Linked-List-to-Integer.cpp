/*
By  :-: savetrees
Used:-: Linked List
*/

class Solution {
public:
    int getDecimalValue(ListNode* head)
    {
          int final=0;
          if(head==NULL)return -1;
          while(head!=NULL)
          {
            final=final*2+head->val;
            head=head->next;
          }  
        return final;
    }
};