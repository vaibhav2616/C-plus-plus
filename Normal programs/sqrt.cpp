#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n<0){
        cout<<"not possible";
    }
        else{
            int root =1;
            while(root*root<=n){
                root++;
            }
            root--;
        cout<<"sqrt of "<<n<<" is "<<root<<endl;
        }
}