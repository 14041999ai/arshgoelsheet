void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL) return;
        ListNode *slow, *fast;
        slow=head;
        fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* pre=slow, *start=pre->next, *then=pre->next->next;
        while(then!=NULL){
            start->next=then->next;
            then->next=pre->next;
            pre->next=then;
            then=start->next;
        }
        
        ListNode* node2=pre->next;
        ListNode* node1=head;
        
        while(node1!=pre){
                pre->next=node2->next;
                node2->next=node1->next;
                node1->next=node2;
                node1=node2->next;
                node2=pre->next;
                
        }
        
    }