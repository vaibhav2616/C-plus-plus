#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter thy size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter thy elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(a[j]<a[j-1])
                swap(a[j],a[j-1]);
            else 
                break;
        }
    }
cout<<"Sorted Array:"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}