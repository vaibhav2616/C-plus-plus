#include<iostream>
#include<string>
using namespace std;
void clockwise_rotate(string &s1){
    char c=s1[s1.size()-1];
    int i=s1.size()-2;
    while(i>=0){
        s1[i+1]=s1[i];
        i--;
    }
    s1[0]=c;
}
void anticlockwise_rotate(string &s1){
    char c=s1[0];
    int i=1;
    while(i<s1.size()){
        s1[i-1]=s1[i];
        i++;
    }
    s1[s1.size()-1]=c;
}
int main(){
    string s1,s2;
    cout<<"Enter String1: ";
    cin>>s1;
    cout<<"Enter String2: ";
    cin>>s2;
    if(s1.size()==s2.size()){
        string clockwise,anticlockwise;
        clockwise=s1;
        clockwise_rotate(clockwise);
        clockwise_rotate(clockwise);
        if(clockwise==s2)
            cout<<"Clockwise matched";
        anticlockwise=s1;
        anticlockwise_rotate(anticlockwise);
        anticlockwise_rotate(anticlockwise);
        if(anticlockwise==s2)
            cout<<"Anti clockwise matched";
        if(clockwise!=s2&&anticlockwise!=s2)       
        cout<<"Rotation insufficient";
    }
    else
        cout<<"String size not equal,can't compare: ";
    return 0;
}