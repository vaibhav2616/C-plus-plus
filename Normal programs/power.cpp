#include<iostream>
using namespace std;
/*int main(){
    int n,pow,ans=1;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>pow;
    for(int i=1;i<=pow;i++){
        ans=ans*n;
    }
    cout<<ans;
}*/
//OR
#include<math.h>
int main(){
    int n,power,ans=1;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>power;
    ans=pow(n,power);
    cout<<ans;
}