#include<iostream>
using namespace std;

int main ()
{
 cout << "Enter the size of the array :" << "\n";
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin >> arr[i];
 }
 cout << "Before the selection sort :" << "\n";
 for(int i=0;i<n;i++)
 {
    cout << arr[i] << " ";
 }
 cout << "\n";
 int min_index;
 for(int i=0;i<n-1;++i)
 {
    min_index = i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min_index])
        {
            min_index = j;
        }
    }
    swap(arr[i],arr[min_index]);
 }
 cout << "After the selection sort " << "\n";
 for(int i=0;i<n;i++)
 {
    cout << arr[i] << " ";
 }
 cout << "\n"; 
return 0;
}