#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > rotate(vector<vector<int> > &matrix){
    int m=matrix.size(),n=matrix[0].size();
    for(int i=0;i<m;i++){ //transpose
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i = 0; i < m; i++) {
       reverse(matrix[i].begin(), matrix[i].end());
    }
    return matrix; 
}
int main(){
    int m,n;
    cout<<"Enter the order of the matrix:";
    cin>>m>>n;
    vector<vector<int> > matrix(m,vector<int>(n));
    cout<<"Enter elements of the Matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    }
    cout<<"Before rotation:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
    cout<<endl;
    }
    rotate(matrix);
    cout<<"After rotation:"<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}