#include<iostream>
using namespace std;

int main ()
{
  int size =5;
  int capacity =100;
  int *arr = new int[capacity];
  for(int i=0;i<size;i++)
  {
      cin >> arr[i];
  }
  cout << " Before the deletion" << "\n";
  for(int i=0;i<size;i++)
  {
     cout<<arr[i] << " ";
  }
   cout<<"\n Enter the Position , from where you want to delete an element" << "\n";
   int pos;
   cin >> pos;
   for(int i=pos+1;i<size;i++)
   {
       arr[i-1] = arr[i];
   }
   cout << " After the deletion" << "\n";
  for(int i=0;i<size-1;i++)
  {
     cout<<arr[i] << " ";
  }
  delete [] arr;
return 0;
}