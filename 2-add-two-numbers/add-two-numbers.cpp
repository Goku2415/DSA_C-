
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        while(curr!=NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr; 
            curr = forward;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // l1 = reverse(l1);
        // l2 = reverse(l2);

        ListNode* anshead = NULL;
        ListNode* anstail = NULL;

        int carry = 0;

        while(l1 != NULL && l2 != NULL ){
            int sum = carry + l1->val + l2->val;
            int digit = sum%10;
            carry = sum/10;

            ListNode* ans = new ListNode(digit);
            if(anshead == NULL){
                anshead = ans;
                anstail = ans;
            }else{
                anstail->next = ans;
                anstail = ans;
            }
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1!=NULL){
            int sum = carry + l1->val;
            int digit = sum%10;
            carry = sum/10;

            ListNode* ans = new ListNode(digit);
            anstail->next = ans;
            anstail = ans;
            l1 = l1->next;
        }
        
        while(l2!=NULL){
            int sum = carry + l2->val;
            int digit = sum%10;
            carry = sum/10;

            ListNode* ans = new ListNode(digit);
            anstail->next = ans;
            anstail = ans;
            l2 = l2->next;
        }

        while(carry!= 0){
            int sum = carry;
            int digit = sum%10;
            carry = sum/10;
            ListNode* ans = new ListNode(digit);
            anstail->next = ans;
            anstail = ans;
        }

        // anshead = reverse(anshead);
        return anshead;

    }
};