#include<iostream>
#include<vector>
using namespace std;

int winner(vector<bool>&person,int n,int index,int p_left,int k){
    if(p_left==1){
        for(int i=0;i<n;i++)
            if(person[i]==0)
                return i;
    }
    int kill=(k-1)%p_left;
    while(kill--){
        index=(index+1)%n;
        while(person[index]==1)
            index=(index+1)%n;
    }
    person[index]=1;
    while(person[index]==1)
        index=(index+1)%n;
    return winner(person,n,index,p_left-1,k);
}

int main(){
    int n,k;
    cin>>n;
    vector<bool>person(n,0);
    cout<<"Enter the no. of iterations upon which the person is to be killed:";
    cin>>k;
    cout<<winner(person,n,0,n,k);
}