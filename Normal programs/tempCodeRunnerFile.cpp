#include<iostream>
using namespace std;
char upper(char name){
    int ans = name -'a' + 'A';
    return ans;
}
int main(){
char name;
cout>>upper(name);
}