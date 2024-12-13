#include<iostream>
#include<string>
using namespace std;
string convertToRoman(int n) {
    vector<int>values={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string>symbols={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string result;
    for (int i=0;i<values.size();i++) {
        while (n>=values[i]){
            n-=values[i];
            result+=symbols[i];
        }
    }
return result;
}
int main(){
    string Roman;
    cout<<"Enter a Roman number: ";
    cin>>Romam;
    cout<<convertToRoman(Roman)<<endl;
    return 0;
}