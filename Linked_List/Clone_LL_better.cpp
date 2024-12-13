#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int x) : data(x), next(NULL), random(NULL) {}
};

class Solution {
public:
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

        // Interleave the original and copied nodes
        Node* curr1 = head;
        Node* curr2 = headcpy->next;
        Node* front1, *front2;
        while (curr1) {
            front1 = curr1->next;
            front2 = curr2->next;
            curr1->next = curr2;
            curr2->next = front1;
            curr1 = front1;
            curr2 = front2;
        }

        // Set the random pointers
        curr1 = head;
        while (curr1) {
            curr2 = curr1->next;
            if (curr1->random)
                curr2->random = curr1->random->next;
            curr1 = curr2->next;
        }

        // Separate the original and copied lists
        curr1 = head;
        curr2 = headcpy->next;
        while (curr1->next) {
            front1 = curr1->next;
            curr1->next = front1->next;
            curr1 = front1;
        }

        Node* result = headcpy->next;
        delete headcpy;
        return result;
    }
};

int main() {
    // Example usage
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->random = head->next->next; // 1's random points to 3
    head->next->random = head; // 2's random points to 1

    Solution sol;
    Node* copiedList = sol.copyList(head);

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