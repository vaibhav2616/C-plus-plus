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
    for (int i = 1; i <= n; i++) {
        cout << "Enter node " << i << " data: ";
        cin >> data;
        if (head == NULL)
            head = create_node(data);
        else {
            struct node* temp = create_node(data);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
}

void delete_any(struct node* &head,int pos){
    if(pos<1){
        cout<<"Invalid position!"<<endl;
        return;
    }
    if(pos==1){
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
    else{
        struct node* curr=head;
        while(--pos && curr!=NULL)
            curr=curr->next;
        if(curr->next==NULL){
            curr->prev->next =NULL;
            delete curr;
        }
        else{
            curr->next->prev=curr->prev;
            curr->prev->next=curr->next;
            delete curr;
        }
    }
}

void display(struct node*head){
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
    int pos;
    cout<<"Enter the position after which you want to delete: ";
    cin>>pos;
    delete_any(head,pos);
    cout<<"After Deletion: ";
    display(head);
    return 0;
}