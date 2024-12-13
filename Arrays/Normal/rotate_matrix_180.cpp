#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > rotate(vector<vector<int> > &matrix){
    int n=matrix.size();
    reverse(matrix.begin(), matrix.end());
    for(int i = 0; i < n; i++) {
       reverse(matrix[i].begin(), matrix[i].end());
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