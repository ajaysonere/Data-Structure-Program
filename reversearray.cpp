#include<iostream>
#include<vector>
using namespace std;
void reverse_array_n(int s,int e, vector<int> &arr)
{
  if(s>=e)
     return;
  swap(arr[s],arr[e]);
  reverse_array_n(s+1,e-1,arr);
  
}
int reverse_array(vector<int> &arr,int n,int m)
{
  reverse_array_n(m+1,n-1,arr);
  for(int i=0;i<n;i++)
  {
     cout << arr[i] << " ";
  }
  cout << "\n";
}
int main ()
{
vector<int> arr;
int value;
int n;
cout << "Enter the Size of The Array :" << "\n";
cin >> n;
for(int i=0;i<n;i++)
{
  cin >> value;
  arr.push_back(value);
}
cout << "Before the reverse the array :" << "\n";
for(int i=0;i<n;i++)
{
   cout << arr[i] << " ";
}
cout << "\n";
int m;
cout <<" From which element you want to reverse the elements :" << "\n";
cin >> m;
reverse_array(arr,n,m);
return 0;
}