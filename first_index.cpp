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
   if(n==0)
   {
     return -1;
   }
   if(x==arr[0])
      return 0;
   int smalloutput =  first_index(arr+1,n-1,x);
   if (smalloutput != -1)
        return smalloutput+1;
   else
     return -1;
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
