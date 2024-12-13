#include <bits/stdc++.h>
using namespace std;

void find(int n, vector<string>& ans, string& temp, int zero, int one) {
    if (temp.size() == n) {
        ans.push_back(temp);
        return;
    }
    temp.push_back('1');
    find(n, ans, temp, zero, one + 1);
    temp.pop_back();

    if (zero < one) {
        temp.push_back('0');
        find(n, ans, temp, zero + 1, one);
        temp.pop_back();
    }
}

    vector<string> NBitBinary(int n) {
        vector<string> ans;
        string temp;
        find(n,ans,temp,0,0);
        return ans;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> ans = NBitBinary(n);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
