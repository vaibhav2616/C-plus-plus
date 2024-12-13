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
    int count =0,candidate=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            candidate=a[i];
        }
        else{
            if(candidate==a[i])
                count++;
            else
                count--;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(a[i]==candidate)
            count++;
        if(count>n/2){
            cout<<"Majority element is: "<<candidate<<endl;
            break;
        }
    }
}