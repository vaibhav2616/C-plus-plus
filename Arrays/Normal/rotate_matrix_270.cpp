#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > rotate(vector<vector<int> > &matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){ //transpose
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int j=0; j<n;j++) {
        for(int i=0,k=n-1;i<k;i++,k--) {
            swap(matrix[i][j],matrix[k][j]);
        }
    }
    return matrix; 
}
int main(){
    int n;
    cout<<"Enter the order of the matrix:";
    cin>>n;
    vector<vector<int> > matrix(n,vector<int>(n));
    cout<<"Enter elements of the Matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    }
    cout<<"Before rotation:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
    cout<<endl;
    }
    rotate(matrix);
    cout<<"After rotation:"<<endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}