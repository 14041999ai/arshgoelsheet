void sortList(){
    int count_1=0;
    int count_2=0;
    int count_0=0;

    ListNode* ptr=head;
    while(ptr){
        if(ptr->val==0)
        count_0++;
        else if(ptr->val==1)
        count_1++;
        else if(ptr->val==2)
        count_2;
    }

    ptr=head;
    while(count_0||count_1||count_2){
        if(count_0){
            ptr->val=0;
            ptr=ptr->next;
            count_0--;
        }

        else if(count_1){
            ptr->val=1;
            ptr=ptr->next;
            count_1--;
        }

        else if(count_2){
            ptr->val=0;
            ptr=ptr->next;
            count_2--;
        }
    }
    return head;
}