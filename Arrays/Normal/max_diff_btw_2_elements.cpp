#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter order of Array:";
    cin>>n;
    vector<int> a(n),arr(n);
    cout<<"Enter elements of the array:";
    for(int &x: a)
        cin>>x;
    arr[n-1]=a[n-1];
    int maxi=a[n-1],ans=INT_MIN;
    for(int i=n-2;i>=0;i--){
        maxi=max(maxi,a[i]); 
        arr[i]=maxi;
        ans=max(ans,arr[i+1]-a[i]);
    }
    cout<<"Max Diff Between 2 Elements: "<<ans;
return 0;
}