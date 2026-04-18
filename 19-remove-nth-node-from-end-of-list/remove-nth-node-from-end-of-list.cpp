class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* forward = curr->next;
        ListNode* prev = NULL;

        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        head = reverse(head);
        int i = 1;
        if (n == 1 && head->next == NULL)
            return NULL;

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        while (curr != NULL) {
            if (i == n) {
                if (prev == NULL) {
                    head = curr->next; 
                } else {
                    prev->next = curr->next;
                }
                break;
            }
            i++;
            forward = curr->next;
            prev = curr;
            curr = forward;
        }

        return reverse(head);
    }
};