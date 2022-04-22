  /*   Given an array of length of n , you need to find and return the first index of n integer x present in the array . return -1 if it is not 
      present in the array .
      First index means , the index of first occurrence of x in the input array.
      input -  4
               9 8 10 8 
               8
      output - 1
  */
   
#include<iostream>
using namespace std;
int first_index(int arr[],int n,int x)
{
   static int i=0;
   if(n==0)
   {
     return 0;
   }
   if(x==arr[i])
      return i;
    i++;
   return first_index(arr,n-1,x);
}

int main()
{
   int n;
   cin >>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   int x;
   cin>>x;
   int z = first_index(arr,n,x);
   if(z==0)
      cout<< "-1" << "\n";
   else
      cout << z << "\n";
   return 0;
}
