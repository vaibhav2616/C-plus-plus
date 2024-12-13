#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter order of the array:";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter elements of the array:";
    for(int &x : a)
        cin>>x;
    cout<<"All SubArrays:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
                cout<<a[k]<<" ";
            cout<<endl;
        }
    }    
}