#include<iostream>
using namespace std;

int main ()
{
  cout << "Enter the size of the Row and Column :" << "\n";
  int rowSize;
  int columnSize;
  cin >> rowSize >> columnSize ;
  int arr[rowSize][columnSize];
  for(int i=0;i<rowSize;i++){
    for(int j=0;j<columnSize;j++){
        cin >> arr[i][j];
    }
  }
  for(int i=0;i<rowSize;i++){
    for(int j=0;j<columnSize;j++){
        cout << arr[i][j] <<" ";
    }
    cout << "\n";
  }
 return 0;
}