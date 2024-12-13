#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the order of the array: ";
    cin>>n;
    vector<int>a(n); 
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        a[i]--;
    for(int i=0;i<n;i++)
        a[a[i]%n]+=n;
    for(int i=0;i<n;i++){
        if(a[i]/n==0)
            cout<<"Missing no.: "<<i+1<<endl;
        else if(a[i]/n==2)
            cout<<"Repeated no.: "<<i+1<<endl;
    }
}