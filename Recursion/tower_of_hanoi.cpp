#include<iostream>
#include<math.h>
using namespace std;

void toh_cal(int N,int sour,int help,int dest){
    if(N==1){
       cout<<"move disk "<<N<<" from rod "<<sour<<" to rod "<<dest<<endl;
       return;
   }
       
    toh_cal(N-1,sour,dest,help);
    cout<<"move disk "<<N<<" from rod "<<sour<<" to rod "<<dest<<endl;;
    toh_cal(N-1,help,sour,dest);
}
   
long long toh(int n, int from, int to, int aux){
    toh_cal(n,from,aux,to);
    return pow(2,n)-1;
}

int main() {
    int N;
    cin>>N;
    cout<<toh(N, 1, 3, 2)<<endl;
return 0;
}