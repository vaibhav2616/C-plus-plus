#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& a, int k) {
        vector<int> ans;
        sort(a.begin(),a.end());
        int start=0,end=1,n=a.size();
        if(k<0)
        k *=-1;
        while(end<n){
            if(a[end]-a[start]==k){
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            else if(a[end]-a[start]<k)
                end++;
            else
                start++;
            if(start==end)
            end++;
            }
        return ans;
    }
int main(){
    int n;
    cout<<"Enter the order of Array:";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter elements of the Array:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cout<<"Enter the target difference:";
    cin>>k;
    vector<int> result=twoSum(a,k);
    if(!result.empty()){
        cout<<"Indices: "<<result[0]<<" and "<<result[1]<<endl;
    } else{
        cout<<"No two numbers add up to the target"<<endl;
    }
    return 0;
}