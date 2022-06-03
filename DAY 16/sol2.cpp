 ListNode* head1,*head2;
    ListNode* traverse(ListNode *l1, ListNode *l2){
        if(l1==NULL && l2==NULL)
            return NULL;
        
        else if(l2==NULL)
            l2=head1;
        
        else if(l1==NULL)
            l1=head2;
        if(l1==l2){
            return l1;
        }
        else{
            return traverse(l1->next, l2->next);
        }
        
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        head1=headA;
        head2=headB;
        return traverse(headA, headB);
    }