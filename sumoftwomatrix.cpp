#include<iostream>
using namespace std;

int main ()
{
 int m=3,n=2;
 int a[m][n];
 int b[m][n];
 int c[m][n];
 cout << "Enter the element of  matrix A :" <<"\n";
 for(int i=0;i<m;i++)
 { 
   for(int j=0;j<n;j++)
   {
     cin >> a[i][j];
   }
 }
 cout << "Enter the element of  matrix B :" <<"\n";
 for(int i=0;i<m;i++)
 { 
   for(int j=0;j<n;j++)
   {
     cin >> b[i][j];
   }
 }
cout << "The Matrix A is :" << "\n";
for(int i=0;i<m;i++)
 { 
   for(int j=0;j<n;j++)
   {
     cout << a[i][j] << " ";
   }
   cout << "\n";
 }
 cout << "The Matrix B is :" << "\n";
for(int i=0;i<m;i++)
 { 
   for(int j=0;j<n;j++)
   {
     cout << b[i][j] << " ";
   }
   cout << "\n";
 }
cout << "The Addition of the 2 matrix " << "\n";
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        c[i][j] = a[i][j]+b[i][j];
        cout << c[i][j] << " ";
    }
    cout << "\n";
}
 return 0;
}