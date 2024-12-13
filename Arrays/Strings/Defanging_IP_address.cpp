#include<iostream>
#include<string>
#include<vector>
using namespace std;
string defangIPaddr(string address) {
        int i=0;
        string ans;
        while(i<address.size()){
            if(address[i]=='.')
                ans+="[.]";
            else
                ans+=address[i];

                i++;
        }
        return ans;
    }
int main(){
    string ip;
    cout<<"Enter an IP address: ";
    cin>>ip;
    cout<<"Defanged IP address: "<<defangIPaddr(ip)<<endl;
    return 0;
}