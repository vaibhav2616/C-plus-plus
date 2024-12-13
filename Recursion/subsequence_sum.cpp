#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int index,int n,int sum,vector<int>&ans,vector<int>& current){
    if(index==n){
        cout<<sum<<": ";
        for(int num : current){
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }
    print(arr,index+1,n,sum,ans,current);
    current.push_back(arr[index]);
    print(arr,index+1,n,sum+arr[index],ans,current);
    current.pop_back();
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans;
    vector<int> current;
    print(arr,0,n,0,ans,current);
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" "<<endl;
    }
}