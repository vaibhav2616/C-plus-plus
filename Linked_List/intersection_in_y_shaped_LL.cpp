struct node* intersectPoint(struct node* head1, struct node* head2) {
        struct node* curr1=head1,struct node* curr2=head2;
        int count1=0,count2=0;
        while(curr1){
            curr1=curr1->next;
            count1++;
        }
        while(curr2){
            curr2=head->next;
            count2++;
        }
        while(count1>count2){
            count1--;
            curr1=curr1->next;
        }
        while(count2>count1){
            count2--;
            curr2=curr2->next;
        }
        while(curr1!=curr2){
            curr1=curr1->next;
            curr2=curr2->next;
        }
        if(!curr1||!curr2)
            return NULL;
        return curr1;
    }