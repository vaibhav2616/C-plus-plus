#include<iostream>
#include<vector>
using namespace std;
vector<int> twoMul(vector<int>& a, int k) {
        vector<int> ans;
        int start=0, end =a.size()-1;
        while(start<end){
            if(a[start]*a[end]==k){
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            else{
                if(a[start]*a[end]>k)
                end--;
                else
                start++;
            }
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
    cout<<"Enter the target product:";
    cin>>k;
    vector<int> result=twoMul(a,k);
    if(!result.empty()){
        cout<<"Indices: "<<result[0]<<" and "<<result[1]<<endl;
    } else{
        cout<<"No two numbers multiply up to the target"<<endl;
    }
    return 0;
}