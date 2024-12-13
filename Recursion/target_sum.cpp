#include<iostream>
#include<vector>
using namespace std;

bool find(int arr[],int index,int n,int target){
    if(target==0)
        return 1;
    if(target<0 || index==n)
        return 0;
    return find(arr,index+1,n,target) || find(arr,index+1,n,target-arr[index]);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int target;
    cout<<"Target Sum:";
    cin>>target;
    find(arr,0,n,target);
}