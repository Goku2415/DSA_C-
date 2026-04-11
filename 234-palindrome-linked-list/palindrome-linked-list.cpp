class Solution {
public:
    ListNode* reverse(ListNode* &head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL || fast->next==NULL)return true;
        while(fast!= NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* ans = reverse(slow);
        // slow->next = ans;
        ListNode* temp1 = head;
        ListNode* temp2 = ans;
        while(temp2!=NULL){
            if(temp2->val != temp1->val){
                return false;
            }
            temp2= temp2->next;
            temp1= temp1->next;
        }
        return true;
    }
};