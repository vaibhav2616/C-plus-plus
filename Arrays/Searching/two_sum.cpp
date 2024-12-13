#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        sort(numbers.begin(),numbers.end());
        int start=0, end =numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            else{
                if(numbers[start]+numbers[end]>target)
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
    vector<int> numbers(n);
    cout<<"Enter elements of the Array:";
    for(int i=0;i<n;i++)
        cin>>numbers[i];
    int target;
    cout<<"Enter the target sum:";
    cin>>target;
    vector<int> result=twoSum(numbers,target);
    if(!result.empty()){
        cout<<"Indices: "<<result[0]<<" and "<<result[1]<<endl;
    } else{
        cout<<"No two numbers add up to the target"<<endl;
    }
    return 0;
}