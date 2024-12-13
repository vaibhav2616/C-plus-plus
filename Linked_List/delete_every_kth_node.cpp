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

struct node* deleteK(struct node* head, int k) {
    struct node* curr=head,*prev=NULL;
    int count=1;
    if(k==1)
        return NULL;
    while(curr){
        if(k==count){
            prev->next=curr->next;
            delete curr;
            curr=prev->next;
            count=1;
        }
        else{
            count++;
            prev=curr;
            curr=curr->next;
        }
    }
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
    cout<<"Enter at what number you want to delete nodes: ";
    cin>>k;
    head = deleteK(head,k);
    cout << "After Deleting: ";
    display(head);
    return 0;
}