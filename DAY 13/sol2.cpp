int getDecimalValue(ListNode* head) {
        int sum=0;
            while(head!=NULL){
                sum=sum*2;
                sum=sum+head->val;
                head=head->next;
            }
        return sum;
    }