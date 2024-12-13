#include<iostream>
using namespace std;

int way(int arr[],int m,int sum){
    if(sum==0)
        return 1;
    if(sum<0)
        return 0;
    int ans=0;
    for(int i=0;i<m;i++)
        ans+=way(arr,m,sum-arr[i]);
    return ans;
}

int main(){
    int n;
    cout<<"Enter order of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<"Enter target sum:";
    cin>>k;
    cout<<way(arr,n,k);
}