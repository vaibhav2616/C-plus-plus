#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int n,int x){
    int sum=0,digit=0,num=n;
    while(n>0){
        digit=n%10;
        n=n/10;
        sum=sum+pow(digit,x);
    }
    if(sum==num)
        return 1;
    else
        return 0;
}
int digits(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int x= digits(n);
    cout<<armstrong(n,x);
return 0;
}