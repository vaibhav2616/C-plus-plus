#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    int start=0,end=0,mid,ans;
    for(int i=0;i<n;i++){
        start=max(start,a[i]);    //or use start=a[n-1];
        end+=a[i];
            }
    while(start<=end){
        mid=start+(end-start)/2; //(start+end)/2 
        int pages =0,count =1;  
        for(int i=0;i<n;i++){
            pages+=a[i];
            if(pages>mid){
                count++;
                pages=a[i];
            }
        }
        if(count<=k){
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
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
    cout<<"Enter the number of painters:";
    cin>>k;
    cout<<B_S(a,n,k);
    return 0;
}