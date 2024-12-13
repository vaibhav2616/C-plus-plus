#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node*head=NULL;

struct node* create_node(int data){
    struct node*n= new node;
    n->data=data;
    n->next=NULL;
    return n;
}

struct node* append_node(int n){
    int item;
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
}

struct node* display(struct node*head){
    struct node* ptr=head;
    while(ptr!=NULL){
        cout<<"->"<<ptr->data;
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of nodes:";
    cin>>n;
    append_node(n);
    cout<<"Here is your linked list: ";
    display(head);
    int x;
    cout<<"Enter the node you want to delete:";
    cin>>x;
    if(x==1){
        struct node*temp1=head;
        head=head->next;
        delete temp1;
    }
    else{
        struct node*curr=head;
        struct node* prev=NULL;
        x--;
        while(x--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
    }

    cout<<"After Deletion: ";
    display(head);
    return 0;
}