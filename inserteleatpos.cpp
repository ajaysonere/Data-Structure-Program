#include<iostream>
using namespace std;

int main ()
{
  int size =5;
  int capacity = 100;
  int *arr = new int [capacity];
  for(int i=0;i<size;i++)
  {
      cin >> arr[i];
  }
  int value,pos;
  if(size<capacity)
  {
      cout<< "Enter the element ans position where you want to put an element :" << "\n";
      cin >> pos >> value;
      int i;
      for( i=size-1;i>=pos;i--)
      {
          arr[i+1] = arr[i];
      }
      arr[pos]=value;
      size++;

  }
  for(int i=0;i<size;i++)
  {
      cout << arr[i] << "\n";
  }
  delete [] arr;

return 0;
}