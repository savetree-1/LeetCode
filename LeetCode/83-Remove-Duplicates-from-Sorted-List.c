/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
  struct ListNode* temp=head;
  struct ListNode* temp2=(struct ListNode*)malloc(sizeof(struct ListNode));
  struct ListNode* tempi=temp2;
  int valu=-101;
  while(temp!=NULL) 
  {
   if(temp->val!=valu)
   {
    tempi->next=(struct ListNode*)malloc(sizeof(struct ListNode));
    tempi=tempi->next;
    tempi->val=temp->val;
   }
   valu=temp->val;
   temp=temp->next;
  } 
  tempi->next=NULL;
  struct ListNode* final=temp2->next;
  free(temp2);
  return final;
  
}