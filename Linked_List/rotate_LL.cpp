#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;

struct node* create_node(int data) {
    struct node* n = new node;
    n->data = data;
    n->next = NULL;
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

struct node* rotateRight(struct node* head, int k) {
    if(!head ||head->next==NULL)
    return head;
    struct node*prev=NULL,*curr=head;
    int count =0;
    while(curr){
        count++;
        curr=curr->next;
    }
    curr=head;
    k%=count;
    if(k==0)
        return head;
    count-=k;
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    struct node*tail=curr;
    while(tail->next){
        tail=tail->next;
    }
    tail->next=head;
    head=curr;
    return head;
}

void display(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        cout << "->" << ptr->data;
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
    int k;
    cout<<"Enter how many times you want to rotate: ";
    cin>>k;
    head = rotateRight(head,k);
    cout << "After Rotating: ";
    display(head);
    return 0;
}