#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int maxi = INT_MIN,prefix=0;
        for(int i=0;i<n;i++){
           prefix+=arr[i];
           maxi=max(prefix,maxi);
           if(prefix<0)
               prefix=0;
        }
        return maxi;
    }
int main(){
    int n;
    cout<<"Enter order of the Array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Elements of the array:";
    for(int &x : arr)
        cin>>x;
    cout<<maxSubarraySum(arr);
}