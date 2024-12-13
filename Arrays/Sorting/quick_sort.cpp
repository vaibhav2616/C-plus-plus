#include<iostream>
using namespace std;

int partition(int a[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(a[i]<=a[end]){
            swap(a[i],a[pos]);
            pos++;
        }
    }
}

void quicksort(int arr[],int start,int end){
    if(start>=end)
        return;

    int pivot=partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot,end);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    quicksort(a,0,n);
    for(int i=0;i<n;i++)
       cout<<a[i];
}