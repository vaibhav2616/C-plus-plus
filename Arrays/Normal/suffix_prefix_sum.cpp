#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter order of the Array:";
    cin>>n;
    vector<int> a(n), ans(n);
    cout<<"Enter Elements of the array:";
    for(int &x : a)
        cin>>x;
    cout<<"Enter 1 for Prefix Sum or 2 for Suffix Sum:";
    cin>>k;
    if(k==1){
        ans[0]=a[0];
        for (int i=1;i<n;i++) 
            ans[i]=ans[i-1]+a[i];
    }
    else if(k==2){
        ans[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
            ans[i]=ans[i+1]+a[i];
    }
    else{
        cout <<"Invalid Input";
        return 1;
    }
    cout<<"Requested Output: ";
    for(int x : ans) 
        cout<<x<<" ";
return 0;
}