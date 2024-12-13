#include <iostream>
#include <vector>
using namespace std;

void warshallAlgorithm(vector<vector<int>>& matrix){
    int V=matrix.size();
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                matrix[i][j] = matrix[i][j] || (matrix[i][k] && matrix[k][j]);
            }
        }
    }
}

void print(const vector<vector<int>>& matrix){
    int V=matrix.size();
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int V;
    cout<<"Enter the number of vertices: ";
    cin>>V;
    vector<vector<int>> matrix(V,vector<int>(V));
    cout<<"Enter the adjacency matrix(0 or 1):"<<endl;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Original matrix:"<<endl;
    print(matrix);

    warshallAlgorithm(matrix);

    cout<<"Transitive Closure:"<<endl;
    print(matrix);
}