#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node*head=NULL;
struct node* tail=NULL;

struct node* create_node(int data){
    struct node*n= new node;
    n->data=data;
    n->next=NULL;
    return n;
}
void append_node(int n){
    int data;
    for(int i=1;i<=n;i++){
        cout<<"Enter node "<<i<<" data:";
        cin>>data;
        if(head==NULL){                  
            head=create_node(data);
            tail=head;
        }
        else{
            tail->next=create_node(data);
            tail=tail->next;
            }
    }
}

void display(struct node* head){
    struct node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
}

int main(){
    int data,n;
    cout<<"Enter the number of nodes:";
    cin>>n;
    append_node(n);
    cout<<"Here is your Linked list: ";
    display(head);
    return 0;
}