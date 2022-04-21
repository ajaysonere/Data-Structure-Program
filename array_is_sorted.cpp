#include<iostream>
using namespace std;

bool array_is_sorted(int arr[],int n)
{
   if(n==0 || n==1)
       return true;
   if(arr[0]>arr[1])
      return false;
   return array_is_sorted(arr+1,n-1);
}
 
int main()
{
  int n;
  cin >>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
     cin >> arr[i];
  }
  if(array_is_sorted(arr,n))
  {
    cout << "Array is Sorted :" << "\n";
  }
  else
  {
    cout << "Array is not Sorted :" << "\n";
  }
}
