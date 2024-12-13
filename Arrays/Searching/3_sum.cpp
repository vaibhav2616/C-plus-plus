#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> threeSum (int arr[], int n, int x) {
    vector<int> a;
    sort(arr, arr + n);
    for(int i=0;i<n-2;i++){
        int ans=x-arr[i],start=i+1,end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans){
                a.push_back(arr[i]);
                a.push_back(arr[start]);
                a.push_back(arr[end]);
               return a;
            }
            else if(arr[start]+arr[end]>ans)
                end--;
            else
                start++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the order of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the Array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<"Enter the target sum:";
    cin>>k;
    vector<int> result=threeSum(arr,n,k);
    if(!result.empty()){
        cout<<"Triplet: "<<result[0]<<", "<<result[1]<<", "<<result[2]<<endl;
    } else{
        cout<<"No triplet adds up to the target"<<endl;
    }
    return 0;
}