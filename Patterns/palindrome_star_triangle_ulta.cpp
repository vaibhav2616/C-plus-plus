#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){ 
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(k=1;k<=2*(n-i)+1;k++){
            cout<<"* ";        
        }
        cout<<endl;
    }
} 
//OR
/*#include <iostream>
using namespace std;
int main() {
    int n,i,j,k;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"  ";
        }
        for(k=n;k>=i;k--){
            cout<<"* ";
        }
        for(k=n-i;k>=1;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
} */
//OR
/*#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter a number:";
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}*/