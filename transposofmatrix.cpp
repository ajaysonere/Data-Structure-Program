#include<iostream>
#include<vector>
using namespace std;
void transpose(vector<vector<int>> &matrix,int n){
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         swap(matrix[i][j],matrix[j][i]);
      }
   }
}
int main ()
{
  cout << "Enter the size of the vector :" << "\n";
  int n;
  cin >> n;
  vector<vector<int>> matrix ;
  for(int i=0;i<n;i++){
   vector<int> v;
   int value;
   for(int j=0;j<n;j++){
    cin >> value;
    v.push_back(value);
   }
   matrix.push_back(v);
  }

 transpose(matrix,n);
 cout << "Transpose of the matrix : "<< "\n";
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
      cout << matrix[i][j] << " ";
   }
   cout << "\n";
 }
 return 0;
}