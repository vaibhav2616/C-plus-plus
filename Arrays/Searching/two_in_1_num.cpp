#include<iostream>
using namespace std;
int main(){
    int n,a,x;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the no. of times the number is repeated:";
    cin>>a;
    x=(a + 100*n);
    int number = x/100;
    int occurence = x%100;
    cout<<"number"<<":"<<number<<endl<<"occurence"<<":"<<occurence<<endl;
}