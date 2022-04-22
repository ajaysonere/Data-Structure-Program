  //  first index problem   

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
