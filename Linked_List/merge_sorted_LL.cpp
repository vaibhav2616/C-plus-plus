struct node* sortedMerge(struct node* head1, struct node* head2) {
    struct node* head=new node(0);
    struct node* tail=head;
    while(head1&&head2){
        if(head1->data<=head2->data){
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else{
            tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }
        if(head1)
            tail->next=head1;
        else
            tail->next=head2;
                
            tail=head;
            head=head->next;
            delete tail;
            return head;
}