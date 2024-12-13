#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
                cout<<"  ";
        }
        for(k=i;k>=1;k--){
            cout<<k<<" "; 
        } 
        cout<<endl;
    }
}