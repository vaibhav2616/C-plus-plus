#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL,*n;

int main(){
    n=(struct node*)malloc(sizeof(struct node));
    n->data=1;
    n->next=NULL;
    head=n;
    cout<<head->data;
    cout<<head<<" "<<head->next;
}