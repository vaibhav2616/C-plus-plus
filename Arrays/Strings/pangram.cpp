#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool Pangram(string s){
    vector<bool>alpha(26,0);
    for(int i=0;i<s.size();i++)
        alpha[s[i]-'a']=1;
    for(int i=0;i<26;i++)
        if(alpha[i]==0)
            cout<<"Not a Pangram";
    cout<<"Is a Pangram";
}
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    Pangram(s);
    return 0;
}