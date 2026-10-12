class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return;

        int len = 0;
        ListNode* curr = head;

        while (curr != NULL) {
            len++;
            curr = curr->next;
        }

        curr = head;

        for (int i = 0; i < (len - 1) / 2; i++) {
            curr = curr->next;
        }

        ListNode* second = curr->next;
        curr->next = NULL;

        ListNode* prev = NULL;
        curr = second;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* first = head;
        second = prev;

        while (second != NULL) {
            ListNode* next1 = first->next;
            ListNode* next2 = second->next;

            first->next = second;
            second->next = next1;

            first = next1;
            second = next2;
        }
    }
};