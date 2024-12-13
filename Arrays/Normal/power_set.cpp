#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Cardinality of the Set: ";
    cin>>n;
    vector<int> a(n);
    cout <<"Enter elements of the Set: ";
    for(int &x : a)
        cin>>x;
    cout<<"Power Set:"<<endl;
    int total=pow(2,n);
    for(int i=0;i<total; i++){
        int flag=1; //for empty
        cout<<"{";
        for(int j =0;j<n;j++){
            if(i & (1<<j)){
                if(!flag) 
                    cout <<",";
                cout<<a[j];
                flag=0; // for not empty
            }
        }
        if(flag)
            cout<<"Φ"; // Print Φ if empty
        cout<<"}"<<endl;
    }
}