#include<iostream>
#include<vector>
using namespace std;
int B_S(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int start=0,end=m*n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int row=mid/n,col=mid%n;
            if(matrix[row][col]==target){
                cout<<"Target located at: "<<endl<<"ROW:"<<row<<","<<"COL:"<<col<<endl;
                return 1;
            }
            else if(matrix[row][col]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        cout<<"Target fleed";
        return 0;
}
int main(){
    int m,n,k;
    cout<<"Enter the order of the matrix:";
    cin>>m>>n;
    vector<vector<int> > matrix(m,vector<int>(n));
    cout<<"Enter elements of the Matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    }
    cout<<"Enter the target element:";
    cin>>k;
    B_S(matrix,k);
return 0;
}