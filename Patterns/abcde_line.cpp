#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
        int num=n;
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num--;
        }   
        cout<<endl;
    }
}