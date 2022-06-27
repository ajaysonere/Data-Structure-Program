#include<iostream>
#include<climits>
using namespace std;
void second_largest(int arr[],int size)
{
  int largest = 0;
  int res =-1;
  for(int i=1;i<size;i++)
  {
    if(arr[i]>arr[largest])
    {
      res = largest;
      largest = i;
    }
    else if(arr[i]!=arr[largest])
    {
      if(res==-1|| arr[i]>arr[res])
      {
        res = i;
      }
    }
  }
  cout <<" Second largest element in the array "<< arr[res] << "\n"; 
}

int main ()
{
 int size;
 cin >> size;
 int  *arr = new int[size];
 for(int i=0;i<size;i++)
 {
   cin>>arr[i];
 }
 second_largest(arr,size) ;
 delete [] arr;
return 0;
}