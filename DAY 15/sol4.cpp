ListNode* partition(ListNode* head, int x) {
        ListNode*temp,*temp2, *p1=new ListNode(0), *p2= new ListNode(0);
        temp=p1;
        temp2=p2;
        while(head!=NULL){
            if(head->val<x){
                p1->next=head;
                p1=p1->next;
            }
            else{
                p2->next=head;
                p2=p2->next;     
            }       
            head=head->next;
        }
        
        p1->next=temp2->next;
        p2->next=NULL;
        return temp->next;
    }