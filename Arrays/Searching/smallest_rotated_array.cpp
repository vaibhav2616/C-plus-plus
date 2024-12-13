#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    int start=0,end=n-1,mid,ans=a[0];
    while(start<=end){
        mid=start+(end-start)/2;     //(start+end)/2
        if(a[mid]>=a[0]){
            start=mid+1;
        }
        else{
        ans=a[mid];
        end=mid-1;
        }
    }
    return ans;
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
    cout<<"Smallest Element: "<<B_S(a,n,k);
    return 0;
}