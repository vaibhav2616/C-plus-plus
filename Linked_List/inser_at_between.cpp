#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node*Head=NULL;

struct node* create_node(int data){
    struct node*n= new node;
    n->data=data;
    n->next=NULL;
    return n;
}

int main(){
    int data,n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter node "<<i<<" data: ";
        cin>>data;
        if(Head==NULL)
            Head=create_node(data);
        else {
            struct node* temp;
            temp=create_node(data);
            temp->next=Head;
            Head=temp;
        }
    }
    cout<<"Before inserting: ";
    struct node* ptr=Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }

    int m;
    cout<<"\nEnter after what node you want to add data: ";
    cin>>m;
    int k;
    cout<<"Enter the data: ";
    cin>>k;

    struct node*temp1=Head;
    m--;
    while(m--)
        temp1= temp1->next;

    struct node* temp2= create_node(k);
    temp2->next=temp1->next;
    temp1->next= temp2;

    cout<<"After Inserting: ";
    struct node* ptr1=Head;
    while(ptr1!=NULL){
        cout<<ptr1->data<<" ";
        ptr1=ptr1->next;
    }
    return 0;
}