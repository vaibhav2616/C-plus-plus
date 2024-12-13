#include<iostream>
using namespace std;
int main(){
    int n,i,k;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to be searched:";
    cin>>k;
    int flag =0;
    for(i=0;i<n;i++){
        if(a[i]==k){
            flag=1;
            break;
        }
    }
if(flag==0)
    cout<<"Element not found"<<endl;
else 
    cout<<"Element found at index "<<i<<endl;
}