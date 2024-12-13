#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}