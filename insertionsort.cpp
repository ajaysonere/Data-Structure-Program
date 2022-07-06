#include<iostream>
using namespace std;

int main ()
{
 cout << "Enter the size of array :" << "\n";
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin >> arr[i];
 }
 cout <<"Before the insertion sort :" << "\n";
 for(int i=0;i<n;i++)
 {
    cout << arr[i] << " ";
 }
 cout << "\n";
 for(int i=1;i<n;i++)
 {
    int key = arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1]=key;
 }
  cout <<"After the insertion sort :" << "\n";
 for(int i=0;i<n;i++)
 {
    cout << arr[i] << " ";
 }
return 0;
}