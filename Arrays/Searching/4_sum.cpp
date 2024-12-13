#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> fourSum (int arr[], int n, int x) {
    vector<int> a;
    sort(arr, arr + n);
    for(int i=0;i<n-3;i++){
        int ans1=x-arr[i];
        for(int j=i+1;j<n-2;j++){
            int ans2=ans1-arr[j],start=j+1,end=n-1;
            while(start<end){
                if(arr[start]+arr[end]==ans2){
                    a.push_back(arr[i]);
                    a.push_back(arr[j]);
                    a.push_back(arr[start]);
                    a.push_back(arr[end]);
                    return a;
                }
                else if(arr[start]+arr[end]>ans2)
                    end--;
                else
                    start++;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the order of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the Array:";
    for(int j=0;j<n;j++)
        cin>>arr[j];
    int k;
    cout<<"Enter the target sum:";
    cin>>k;
    vector<int> result=fourSum(arr,n,k);
    if(!result.empty()){
        cout<<"Quadruplet: "<<result[0]<<", "<<result[1]<<", "<<result[2]<<", "<<result[3]<<endl;
    } else{
        cout<<"No Quadruplet adds up to the target"<<endl;
    }
    return 0;
}