#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;     //(start+end)/2
        if(a[mid]>a[mid+1]&&a[mid]>a[mid-1])
        return mid;
        else if(a[mid]>a[mid-1])
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}
int main(){
    int n,i,k;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Peak Index is: "<<B_S(a,n,k);
    return 0;
}