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

void append_node(int n) {
    int data;
    for (int i=1;i<=n;i++){
        cout<<"Enter node "<<i<<" data: ";
        cin>>data;
        if (head ==NULL)
            head =create_node(data);
        else{
            struct node* temp =create_node(data);
            temp->next =head;
            head->prev=temp;
            head =temp;
        }
    }
}

void delete_at_end(struct node* &head){
    if(head!=NULL){
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        else{
            struct node*curr=head;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->prev->next=NULL;
            delete curr; 
        }
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
    append_node(n);
    cout<<"Here is your linked list: ";
    display(head);
    delete_at_end(head);
    cout<<"After Deletion: ";
    display(head);
    return 0;
}