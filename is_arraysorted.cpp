#include<iostream>
using namespace std;
  bool is_arraysorted(int arr[],int size)
  {
      cout << "Time complexity is O(n^2)" <<"\n";
      for(int i=0;i<size;i++)
      {
          for(int j=i+1;j<size;j++)
          {
              if(arr[j] <arr[i])
                  return false;
          }
      }
      return true;
  }

bool is_arrsorted(int arr[],int size)
{
    cout << "TIme Complexity is O(n)"<<"\n";
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main ()
{
 int size;
 cin >> size;
 int *arr = new int[size];
 for(int i=0;i<size;i++)
 {
     cin >> arr[i];
 }
 if(is_arraysorted(arr,size)==1)
 {
    cout<< " Array is Sorted : "<<"\n";
 
 }
   else{
       cout<< " Array is not Sorted : "<<"\n";
    }
   if(is_arrsorted(arr,size)==1)
     {
        cout<< " Array is Sorted : "<<"\n";
     } 
   else {
    cout<< " Array is not Sorted : "<<"\n";
   }
    delete[] arr;
    return 0;
}