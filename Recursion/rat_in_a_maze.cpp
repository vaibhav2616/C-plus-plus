#include<ioatream>
#include<vector>
#include<string>

int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
    string dir = "UDLR";
    
    bool valid(int i,int j,int n){
        return i>=0 && j>=0 && i<n && j<n;
    }
    
    void Total(vector<vector<int>>&matrix,int i,int j,int n,string &path,vector<string>&ans,vector<vector<bool>> &visited){
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        visited[i][j]=1;
        for(int k=0;k<4;k++){
            if(valid(i+row[k],j+col[k],n)&&matrix[i+row[k]][j+col[k]]&&!visited[i+row[k]][j+col[k]]){
                path.push_back(dir[k]);
                Total(matrix,i+row[k],j+col[k],n,path,ans,visited);
                path.pop_back();
            }
        }
        visited[i][j]=0;
    }
    
    vector<string> findPath(vector<vector<int>> &mat) {
        int n=mat.size();
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        vector<string>ans;
        string path;
        if(mat[0][0]==0 || mat[n-1][n-1]==0)
            return ans;
        Total(mat,0,0,n,path,ans,visited);
        return ans;
    }
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}