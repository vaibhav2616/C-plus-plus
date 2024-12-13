#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int index,int n,int sum,vector<int>&ans){
    if(index==n){
        ans.push_back(sum);
        return;
    }
    print(arr,index+1,n,sum,ans);
    print(arr,index+1,n,sum,ans);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans;
    print(arr,0,n,0,ans);
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
    }
}