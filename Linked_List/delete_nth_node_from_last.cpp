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

struct node* removeNthFromEnd(struct node* head, int n) {
    struct node*temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    count-=n;
    if(count==0){
        temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    struct node*curr=head,*prev=NULL;
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
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
    cout<<"Enter the node you want to remove from the last: ";
    cin>>k;
    head = removeNthFromEnd(head,k);
    cout << "After Removing: ";
    display(head);
    return 0;
}