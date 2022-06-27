#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int size)
{
    int low =0;
    int high =size-1;
    while(low<=high)
      {
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
     }
      for(int i=0;i<size;i++)
        {
          cout<< arr[i] << " ";
        }
      cout << "\n";
}

int main ()
{
  int size;
  cin >> size;
  int *arr = new int[size];
  for(int i=0;i<size;i++)
  {
      cin >>arr[i];
  }
  reverseArray(arr,size);
  delete []arr;
return 0;
}