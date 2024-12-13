#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& height) {
      int n = height.size();
      int i = 0, j = n - 1;
      int left_max = 0;
      int right_max = 0;
      int water = 0;
      while (i <= j) {
        left_max = max(left_max, height[i]);
        right_max = max(right_max, height[j]);
        if (left_max < right_max) {
          int water = min(left_max, right_max) - height[i];
          water += max(0, water);
          ++i;
        } else {
          int water = min(left_max, right_max) - height[j];
          water += max(0, water);
          --j;
        }
      }
      return water;
}
int main(){
    int n;
    cout<<"Enter order of the Array:";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter Elements of the array:";
    for(int &x : arr)
        cin>>x;
    cout<<"Total water trapped: "<<trap(arr);
}