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

void append_node(int n) {
    int data;
    for (int i = 1; i <= n; i++) {
        cout << "Enter node " << i << " data: ";
        cin >> data;
        if (head == NULL)
            head = create_node(data);
        else {
            struct node* temp = create_node(data);
            temp->next = head;
            head = temp;
        }
    }
}

void delete_at_end(struct node* head){
    if(head->next==NULL){
        struct node*temp1=head;
        delete temp1;
        head=NULL;
    }
    else{
        struct node*curr=head;
        struct node* prev=NULL;
        while(curr->next!=NULL){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;
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