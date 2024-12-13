#include<iostream>
using namespace std;

int subsum(int arr[],int index,int n,int sum) {
    if(sum==0)
         return 1;
    if(index==n || sum<0)
        return 0;
    return subsum(arr,index+1,n,sum)+subsum(arr,index+1,n,sum-arr[index]);
}

int main(){
    int n,sum;
    cin>>n;
    cout<<"Enter the target sum:";
    int a[n];
    cout<<subsum(a,0,n,sum)<<endl;
}