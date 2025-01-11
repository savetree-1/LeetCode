class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;  
        return newHead;
    }
    ListNode* mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;      
            slow = slow->next;  
        }
        return slow;
    }
    void merge(ListNode* l1, ListNode* l2) {
        while(l2 != NULL) {
            ListNode* ln1 = l1->next;
            ListNode* ln2 = l2->next;
            l1->next = l2;
            l2->next = ln1;
            l1 = ln1;
            l2 = ln2;
        }
    }
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;
        ListNode* midd = mid(head);
        ListNode* head2 = reverseList(midd->next);
        midd->next = NULL;
        merge(head, head2);
    }
};
