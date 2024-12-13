#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node*head=NULL;

struct node* create_node(int data){
    struct node*n= new node;
    n->data=data;
    n->next=NULL;
    n->prev=NULL;
    return n;
}

void delete_at_start(struct node* &head){
    if(head->next==NULL){
        delete head;
        head=NULL;
    }
    else{
        struct node*temp1=head;
        head=head->next;
        delete temp1;
        head->prev=NULL;
    }
}

struct node* display(struct node*head){
    struct node* ptr=head;
    while(ptr!=NULL){
        cout<<"<=>"<<ptr->data;
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(){
    int item,n;
    cout<<"Enter the number of nodes:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter node "<<i<<" data:";
        cin>>item;
        if(head==NULL)
            head=create_node(item);
        else {
            struct node* temp;
            temp=create_node(item);
            temp->next=head;
            head=temp;
        }
    }
    cout<<"Here is your linked list: ";
    display(head);
    delete_at_start(head);
    cout<<"After Deletion: ";
    display(head);
    return 0;
}