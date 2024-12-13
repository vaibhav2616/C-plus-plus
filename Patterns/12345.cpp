/*#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){;
        for(j=1;j<=n*n;j++){
            cout<<j<<" ";
            if(j%n==0){
                cout<<endl;
            }
        }   
        break;
    }
}*/
//OR
/*#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){;
        for(j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }   
        cout<<endl;
    }
}*/
//OR 
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){;
        for(j=1;j<=n;j++){
            cout<<j+5*(i-1)<<" ";
        }   
        cout<<endl;
    }
}