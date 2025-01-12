class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode* dummy = new ListNode(0); 
    dummy->next = head;
    ListNode* current = head;
    ListNode* prev = dummy;
    while (current && current->next) {
        if (current->val <= current->next->val) {
            current = current->next;
        } else {
            ListNode* temp = current->next;
            current->next = temp->next;
            ListNode* it = dummy;
            while (it->next->val < temp->val) {
                it = it->next;
            }
            temp->next = it->next;
            it->next = temp;
        }
    }
    ListNode* sortedHead = dummy->next;
    delete dummy;
    return sortedHead;
    }
};