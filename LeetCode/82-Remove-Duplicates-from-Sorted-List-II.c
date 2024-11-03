struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode*dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode*temp = dummy;
    struct ListNode*tempi = head;
    int prev = -101;
    while (tempi!=NULL) {
        if ((tempi->next == NULL || tempi->val != tempi->next->val) && tempi->val != prev) {
            temp->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            temp=temp->next;
            temp->val =tempi->val;
        }
        prev = tempi->val;
        tempi = tempi->next;
    }
    temp->next = NULL;
    struct ListNode* result = dummy->next;
    free(dummy);
    return result;
}
