#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter a number:";
    cin>>n;
        char ch ='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
                cout<<"  ";
        }
        for(k=1;k<=i;k++){
            cout<<ch<<" "; 
            
        } 
        ch++;
        cout<<endl;
    }
}