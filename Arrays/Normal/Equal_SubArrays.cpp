#include<iostream>
#include<vector>
using namespace std;
bool divide(vector<int> a){
    int prefix=0,sum=0,n=a.size();
    for(int i=0;i<n;i++)
        sum+=a[i];
    for(int i=0;i<n-1;i++){
        prefix+=a[i];
        int ans=sum-prefix;    //better approach
        if(ans==prefix)    //if(sum==2*prefix)
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter order of the Array:";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter Elements of the array:";
    for(int &x : a)
        cin>>x;
    cout<<divide(a);
}