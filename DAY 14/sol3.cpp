ListNode* reverseBetween(ListNode* head, int left, int right) {
       if(head == NULL) return NULL;
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* pre=dummy;
        for(int i=0; i<left-1; i++) pre=pre->next;
        ListNode* start=pre->next;
        ListNode* then=start->next;
        
        for(int i=0; i<right-left; i++){
            start->next=then->next;
            then->next=pre->next;
            pre->next=then;
            then=start->next;
        }
        
        return dummy->next;
    }