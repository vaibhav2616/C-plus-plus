#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter thy size of the array:";
    cin>>n;
    char a[n];
    cout<<"Enter thy elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i,j,index;
    for(i=0;i<n-1;i++){
        index =i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[index]){
                swap(a[j],a[index]);
            }
        }
    }
    cout<<"Sorted Array:";
    for(i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}