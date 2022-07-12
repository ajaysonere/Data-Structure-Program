#include<iostream>
using namespace std;
const int m = 3;
const int n = 3;
void mat(int arr[m][n])
{
    cout << "The matrix is :" << "\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << "\n";
    }
}
int main ()
{
 int arr[m][n];
 for(int i=0;i<m;i++)
 {
    for(int j=0;j<n;j++)
    {
        cin >>arr[i][j];
    }
 }
 mat(arr);
return 0;
}