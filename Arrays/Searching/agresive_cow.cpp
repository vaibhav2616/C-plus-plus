#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    //sort(a);
    int start=1,end,mid,ans;
    end =a[n-1]-a[0];
    while(start<=end){
        mid=start+(end-start)/2; //(start+end)/2 
        int pos=a[0],count=1;  
        for(int i=0;i<n;i++){
            if(pos+mid<=a[i]){
                count++;
                pos=a[i];
            }
        }
        if(count<k)
            end=mid-1;
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,i,k;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number of cows:";
    cin>>k;
    cout<<B_S(a,n,k);
    return 0;
}