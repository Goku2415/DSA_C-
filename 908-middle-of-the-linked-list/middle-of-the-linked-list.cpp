class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        // Edge case (optional, but safe)
        if(head == NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;        
            fast = fast->next->next; 
        }

        return slow;
    }
};