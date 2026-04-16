
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a= headA;
        ListNode* b= headB;

        while(a!=NULL && b!= NULL){
            if(a==b)return a;
            a=a->next;
            b=b->next;
        }

        if(a==NULL && b==NULL && a!=b)return NULL;


        if(a==NULL){
            int blen = 0;
            while(b!=NULL){
                blen++;
                b=b->next;
            }

            while(blen--){
                headB = headB->next;
            }

        }else{
            int alen = 0;
            while(a!=NULL){
                alen++;
                a=a->next;
            }

            while(alen--){
                headA = headA->next;
            }
        }

        while(headA != headB ){
            headA= headA->next;
            headB= headB->next;
        }

        return headA;
    }
};
