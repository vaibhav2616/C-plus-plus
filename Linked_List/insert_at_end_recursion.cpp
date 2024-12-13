#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};
struct node* Head = NULL;

struct node* create_node(int data, int index, int n) {
    if (index == n)
        return NULL;
    struct node* temp = new node; 
    temp->next = create_node(data, index + 1, n);
    return temp;
}

int main() {
    int data, n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter node " << i << " data: ";
        cin >> data;
        if (Head == NULL) {
            Head = create_node(data, i, n); 
        } 
        else {
            struct node* temp = Head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = create_node(data, i, n);
        }
    }
    struct node* ptr = Head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return 0;
}