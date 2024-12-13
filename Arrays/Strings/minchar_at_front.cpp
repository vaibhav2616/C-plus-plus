#include <bits/stdc++.h>
using namespace std;

int minChar(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    int size = str.size();
    str += "₹";
    str += rev;
    int n = str.size();
    int lps[n];
    for (int i = 0; i < n; i++) {
        lps[i] = 0;
    }   
    int pre = 0, suf = 1; 
    while (suf < n) {
        if (str[pre] == str[suf]) {
            lps[suf] = pre + 1;
            pre++, suf++;
        } 
        else{
            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }
    return size - lps[n - 1];
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Minimum characters to add: " <<minChar(str)<<endl;
    return 0;
}