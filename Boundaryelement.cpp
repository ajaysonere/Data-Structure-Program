#include<iostream>
#include<vector>
using namespace std;
vector<int> printBoundary(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;
    if(row==1){
        for(int i=0;i<col;i++){
            ans.push_back(matrix[0][i]);
        }
    }
    else if(col == 1){
       for(int i=0;i<row;i++){
           ans.push_back(matrix[i][0]);
       }
    }
    else{
        for(int i=0;i<col;i++){
            ans.push_back(matrix[0][i]);
        }
        for(int i=1;i<row;i++){
            ans.push_back(matrix[i][col-1]);
        }
        for(int i=col-2;i>=0;i--){
            ans.push_back(matrix[row-1][i]);
        }
        for(int i=row-2;i>0;i--){
           ans.push_back(matrix[i][0]);
        }
    }
    return ans;
}

int main ()
{
 int n;
 cin >> n;
 vector<vector<int> > matrix;
 int value;
 for(int i=0;i<n;i++)
 {
    vector<int> v;
    for(int j=0;j<n;j++){
        cin >> value;
        v.push_back(value);
    }
    matrix.push_back(v);
 }
 vector<int> v = printBoundary(matrix);
 for(int i=0;i<v.size();i++){
        cout << v[i]<<" ";
 }
 return 0;
}