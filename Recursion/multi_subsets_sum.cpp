#include<iostream>
using namespace std;

int subset(int arr[],int index,int sum,int n) {
    if(index==n)
        return sum==0;
    return subset(arr,index+1,sum,n)+subset(arr,index+1,sum-arr[index],n);
}
int main(){
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cout<<subset(a,0,sum,n)<<endl;
}