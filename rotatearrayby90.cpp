#include<iostream>
#include<vector>
using namespace std;
void rotate90Matrix(vector<vector<int>> &matrix,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int low =0, high = n-1;
        while(low<high){
            swap(matrix[low][i],matrix[high][i]);
            low++;
            high--;
        }
    }
}
int main ()
{
  cout << "Enter the size of the vector :" << "\n"; 
  int n;
  cin >> n;
  vector<vector<int>> matrix;
  for(int i=0;i<n;i++){
    vector<int> v;
    int value;
    for(int j=0;j<n;j++){
        cin >> value;
        v.push_back(value);
    }
    matrix.push_back(v);
  }

  rotate90Matrix(matrix,n);
  cout << "After the rotate of 90 :"<< "\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}