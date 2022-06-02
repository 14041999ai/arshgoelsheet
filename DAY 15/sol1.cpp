ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        
        ListNode* pre=dummy;
        ListNode* temp=head;
        while(temp ){
            if(temp->val==val){
                pre->next=temp->next;
                temp=temp->next;
            }else{
                temp=temp->next;
                pre=pre->next;
            }
        }
        
        return dummy->next;
    }