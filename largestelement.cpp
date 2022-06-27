#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void largest_element(int arr[] , int size)
{
  int max = INT_MIN;
  int min = INT_MAX;

  for(int i=0;i<size;i++)
  {
      if(arr[i] > max)
      {
          max = arr[i];
      }
      if(arr[i]<min)
      {
        min = arr[i];
      }
  }

  cout << "The Largest Element Is :" << max << "\n";
  cout << "The Minimum Element Is :" << min << "\n";

}
int main ()
{
  cout << "Enter the Size of the Array :" << "\n";
  int size;
  cin >> size;
  int *arr = new int [size];
  for(int i=0;i<size;i++)
  {
      cin >> arr[i];
  }
 largest_element( arr,size);
 delete [] arr;
return 0;
}