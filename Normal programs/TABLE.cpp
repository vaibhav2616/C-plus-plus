#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the table:";
    cin>>n;
    for(i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" is "<<n*i<<endl;
    }
}