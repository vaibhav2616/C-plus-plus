#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int x) : data(x), next(NULL), random(NULL) {}
};

Node* copyList(Node* head) {
    if (!head) return NULL;

    Node* headcpy = new Node(0);
    Node* tailcpy = headcpy;
    Node* temp = head;

    // Create a copy of the list without random pointers
    while (temp) {
        tailcpy->next = new Node(temp->data);
        tailcpy = tailcpy->next;
        temp = temp->next;
    }

    // Set the random pointers
    tailcpy = headcpy->next;
    temp = head;
    unordered_map<Node*, Node*> m;
    while (temp) {
        m[temp] = tailcpy;
        tailcpy = tailcpy->next;
        temp = temp->next;
    }

    tailcpy = headcpy->next;
    temp = head;
    while (temp) {
        tailcpy->random = m[temp->random];
        tailcpy = tailcpy->next;
        temp = temp->next;
    }

    Node* result = headcpy->next;
    delete headcpy;
    return result;
}

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->random = head->next->next; // 1's random points to 3
    head->next->random = head; // 2's random points to 1

    Node* copiedList = copyList(head);

    // Print copied list
    Node* temp = copiedList;
    while (temp) {
        cout << "Node: " << temp->data;
        if (temp->random)
            cout << ", Random: " << temp->random->data;
        cout << endl;
        temp = temp->next;
    }

    return 0;
}
