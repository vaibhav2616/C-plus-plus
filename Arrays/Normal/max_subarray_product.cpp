#include <iostream>
#include <vector>
using namespace std;

int maxSubarrayProduct(vector<int> &arr) {
    int maxProduct = arr[0], currentMax = arr[0], currentMin = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < 0) {
            swap(currentMax, currentMin);
        }
        currentMax = max(arr[i], currentMax * arr[i]);
        currentMin = min(arr[i], currentMin * arr[i]);

        maxProduct = max(maxProduct, currentMax);
    }
    return maxProduct;
}

int main() {
    int n;
    cout << "Enter the order of the Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of the array: ";
    for (int &x : arr)
        cin >> x;
    cout << "Maximum product of subarray: " << maxSubarrayProduct(arr) << endl;
    return 0;
}