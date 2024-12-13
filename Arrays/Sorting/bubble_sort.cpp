#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=n-2; i>=0;i--){
        bool swapped = 0;
        for(j=0;j<=i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped =1;
            }
        }
        if(swapped ==0){
            break;
        }
    }
    cout<<"Sorted Array:"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}