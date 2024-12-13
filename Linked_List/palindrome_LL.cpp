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

bool isPalindrome(struct node* head) {
    if(head->next==NULL)
       return 1;
    struct node*temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    count/=2;
    struct node*curr=head,*prev=NULL;
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    struct node *front=NULL;
    prev=NULL;
    while(curr){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    struct node *head1=head;
    struct node *head2=prev;
    while(head1){
        if(head1->data!=head2->data)
            return 0;
        head1=head1->next;
        head2=head2->next;
    }
    return 1;
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
     bool result = isPalindrome(head);
    cout << "Is the linked list a palindrome?: " << (result ? "Yes" : "No") << endl;
    return 0;
}