  // Insert in element to the last index ...
 
#include<iostream>
using namespace std;

int main()
{
   int n;
   cin >>n;
   int arr[n];
   int i=0;
   for(;i<n-1;i++)
   {
     cin >>arr[i];
   }
   int x;
   cin>>x;
   arr[i]=x;
   for(int i=0;i<n;i++)
   {
     cout << arr[i]<<" ";
   }
   cout<<"\n";
}
