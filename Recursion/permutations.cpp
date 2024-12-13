#include<iostream>
#include<vector>
using namespace std;

void permut(vector<int> &arr,vector<vector<int> >&ans,int index){
    if(arr.size()==index){
        ans.push_back(arr);
        return;
    }
    for(int i=index;i<arr.size();i++){
        swap(arr[index],arr[i]);
        permut(arr,ans,index+1);
        swap(arr[index],arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++)
        cin>>arr[i];
    vector<vector<int> >ans;
    permut(arr,ans,0);
    for(int i=0;i<ans[i].size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }
}