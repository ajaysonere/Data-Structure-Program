#include<bits/stdc++.h>
using namespace std;
bool find_element(int arr[],int n,int k)
{
   if(n==0)
     return false;
   if(k==arr[0])
     return true;
   return find_element(arr+1,n-1,k);
}
int main()
{
  int n;
  cin >>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin >>arr[i];
  }
  int k;
  cin>>k;
  if(find_element(arr,n,k))
  {
    cout<<"Element is Present " << "\n";
  }
  else
  {
   cout<<"Element is not Present " << "\n";
  }
  return 0;
}
