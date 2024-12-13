struct node* segregate(struct node* head){
    struct node* curr=head;
        int count0=0,count1=0,count2=0;
        while(curr){
            if(curr->data==0)
                count0++;
            else if(curr->data==1)
                count1++;
            else
                count2++;
                
            curr=curr->next;
        }
        curr=head;
        while(count0--){
            curr->data=0;
            curr=curr->next;
        }
        while(count1--){
            curr->data=1;
            curr=curr->next;
        }
        while(count2--){
            curr->data=2;
            curr=curr->next;
        }
        return head;
    }