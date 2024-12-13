#include <iostream>
#include <vector>
#include <string>
using namespace std;
string sorting(string s) {
    vector<string> ans(10);
    string temp;
    int count = 0, i = 0;
    while (i < s.size()) {
        if (s[i] == ' ') {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        } else {
            temp += s[i];
            i++;
        }
    }
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;
    for (int i = 0; i < count; i++) {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();
    return temp;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << sorting(s);
    return 0;
}