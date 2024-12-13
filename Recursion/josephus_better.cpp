#include<iostream>
#include<vector>
using namespace std;

winner(int n,int k){
    if(n==1)
        return 0;
    return (winner(n-1,k)+k)%n;
}

int main(){
    int n,k;
    cout<<"Enter the number of test subjects:";
    cin>>n;
    vector<bool>person(n,0);
    cout<<"Enter the no. of iterations upon which the test subject is to be killed:";
    cin>>k;
    cout<<winner(n,k)+1;
}