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

struct node* middleNode(struct node* head) {
       struct node *slow=head,*fast=head;
       
       while(fast&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       return slow;
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
    cout << "middle node: ";
    struct node* mid = middleNode(head);
    cout<<mid->data;
    return 0;
}