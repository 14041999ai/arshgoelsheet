ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* ptr1=l1, ptr2=l2;
    int sum=ptr1->val+ptr2->val;
    ptr1=ptr1->next;
    ptr2=ptr2->next;
    ListNode* head = new ListNode(sum%10);
    int carry=sum/10;
    ListNode* ptr=head;
    while(ptr1 !=NULL && ptr2!=NULL){
        int carry=sum/10;
        sum=ptr1->val+ptr2->val+carry;
        ptr->next=new ListNode(sum%10);
        carry=sum/10;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    while(ptr1!=NULL){
        sum=ptr1->val+carry;
        ptr->next=new ListNode(sum%10);
        carry=sum/10;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL){
        sum=ptr2->val+carry;
        ptr->next=new ListNode(sum%10);
        carry=sum/10;
        ptr2=ptr2->next;
    }
    if(carry){
        ptr->next=new ListNode(carry);
        carry=0;
    }
    return head;
}