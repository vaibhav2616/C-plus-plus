#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    if(k<2)
    return k;
    int start=0,end=k,mid,ans;
    while(start<=end){
        mid=start+(end-start)/2;     //(start+end)/2
        if(mid==k/mid){
            ans=mid; 
            break;
        }
        else if(mid<k/mid){
            ans=mid;
            start=mid+1;
        }
        else
            end=mid-1;
    }
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
    cout<<B_S(a,n,k);
    return 0;
}