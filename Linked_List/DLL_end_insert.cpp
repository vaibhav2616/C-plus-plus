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
}