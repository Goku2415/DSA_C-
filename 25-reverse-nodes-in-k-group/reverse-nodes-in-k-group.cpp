class Solution {
public:

    int getLength(ListNode*& head){
        ListNode* temp = head;
        int len=0;
        while(temp != NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr->next;

        int i=0;
        int len = getLength(curr);
        while(i<k){
            if(len<k){
                return head;
            }else{
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward; 
                i++;
            }
        }
        if(forward!=NULL){
            head->next = reverseKGroup(forward, k);
        }

        return prev;
    }
};