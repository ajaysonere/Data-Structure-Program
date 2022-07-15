#include<iostream>
#include<vector>
using namespace std;
vector<int> printInSpiral(vector< vector<int>> &matrix){
    int top=0, left =0;
    int right = matrix[0].size()-1;
    int bottem = matrix.size()-1;
    vector<int> ans;
    while(top <= bottem && left <= right){
        for(int i=top;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottem;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(left<=right){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottem][i]);
            }
            bottem--;
        }
        if(top<=bottem){
           for(int i=bottem; i>=top;i--){
            ans.push_back(matrix[i][left]);
           }
        
           left++;
        }
    }
    return ans;
}
int main ()
{
 int n;
 cin >> n;
 vector< vector<int> > matrix ;
 for(int i=0;i<n;i++){
    vector<int> v;
    int value;
    for(int j=0;j<n;j++){
        cin >> value;
        v.push_back(value);
    }
    matrix.push_back(v);
 }
 vector <int> v = printInSpiral(matrix);
 for(vector<int> :: iterator itr = v.begin(); itr != v.end(); itr++){
    cout << *itr << " ";
 }
 return 0;
}