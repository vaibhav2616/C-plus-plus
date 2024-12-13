#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head = NULL,*tail=head;

struct node* create_node(int data) {
    struct node* n = new node;
    n->data = data;
    n->next = NULL;
    n->prev = NULL;
    return n;
}

void append_node(int n) {
    int data;
    for (int i = 1; i <= n; i++) {
        cout << "Enter node " << i << " data: ";
        cin >> data;
        if (head == NULL){
            head = create_node(data);
            tail= head;    
        }
        else {
            struct node* temp = create_node(data);
            tail->next = temp;
            temp->prev=tail;
            tail = temp;
        }
    }
}

void insert(struct node* &head, int pos,int data){
    if(pos==0){
        if(head==NULL)
            head= create_node(data);
        else{
            struct node*temp=create_node(data);
            temp->next= head;
            head->prev=temp;
            head= temp;
        }
    }
    else{
        struct node*curr=head;
        while(--pos)
            curr=curr->next;

        if(curr->next==NULL){
            struct node*temp= create_node(data);
            temp->prev=curr;
            curr->next=temp;
        }
        else{
            struct node*temp=create_node(data);
            temp->next= curr->next;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }
}

void display(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        cout << "<=>" << ptr->data;
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    append_node(n);
    cout << "Here is your linked list: ";
    display(head);
    int pos;
    cout<<"After what node you want to insert a node: ";
    cin>>pos;
    int value;
    cout<<"Enter the data you want to insert: ";
    cin>>value;
    insert(head,pos,value);
    cout << "Here is your new linked list:\n ";
    display(head);
}