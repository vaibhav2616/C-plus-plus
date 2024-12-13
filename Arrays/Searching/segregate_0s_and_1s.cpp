#include<iostream>
#include<vector>
using namespace std;
void segregate0and1(vector<int> &arr) {
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end){
            if(arr[start]==0)
                start++;
            else{
                if(arr[end]==0){
                    swap(arr[start],arr[end]);
                    start++;
                    end--;
                }
                else
                    end--;
            }
        }
    }
int main(){
    int n;
    cout<<"Enter the order of Array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of the array:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    segregate0and1(arr);
    cout<<"Segregated array:";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}