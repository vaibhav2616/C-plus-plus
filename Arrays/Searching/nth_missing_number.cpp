#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    int start=0,end=n-1,mid,ans=n;
    while(start<=end){
        mid=start+(end-start)/2;     //(start+end)/2
        if(a[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    return ans+k;
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
    cout<<"Nth missing element is: "<<B_S(a,n,k);
    return 0;
}