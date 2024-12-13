#include<iostream>
using namespace std;
int B_S(int a[],int n,int k){
    int start=0,end=0,mid,ans;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];    
        end=max(end,a[i]);
    }
    start=sum/k;
    if(!start)
        start=1;        
    while(start<=end){
        mid=start+(end-start)/2; //(start+end)/2 
        int total_time=0;  
        for(int i=0;i<n;i++){
            total_time += a[i]/mid;
            if(a[i]%mid)
            total_time++;
        }
            if(total_time > k)
                start=mid+1;
            else{
            ans=mid;
            end=mid-1;
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
    cout<<"Enter the max time:";
    cin>>k;
    cout<<B_S(a,n,k);
    return 0;
}