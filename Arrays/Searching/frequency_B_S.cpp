#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    int start=0,end=n-1,mid,first=-1,last=-1;
    while(start<=end){
        mid=start+(end-start)/2;     //(start+end)/2
        if(a[mid]==k){
            first =mid;
            end=mid-1;
        }
        else if(a[mid]<k)
        start=mid+1;
        else
        end=mid-1;
    }
    start=0,end=n-1;
    while(start<=end){
        mid=start+(end-start)/2;     //(start+end)/2
        if(a[mid]==k){
            last =mid;
            start=mid+1;
        }
        else if(a[mid]<k)
        start=mid+1;
        else
        end=mid-1;
    }
cout<<(last-first)+1<<endl;
return 0;
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
    cout<<"Enter element to be searched:";
    cin>>k;
    B_S(a,n,k);
    return 0;
}