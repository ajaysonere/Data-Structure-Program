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
    cin >> arr[i] ;
 }
 cout << "Before the Bubble Sort :" << "\n";
   for(int i=0;i<n;i++)
     {
      cout << arr[i] << " ";
     }
bool swapped ;
   for(int i=0;i<n-1;i++)
     {
       swapped = false;
       for(int j=0;j<n-i-1;j++)
         {
           if(arr[j]>arr[j+1])
             {
                swap(arr[j],arr[j+1]);
                swapped = true;
             }
         }
         if(swapped==false)
          {
             break;
          }
      }
 cout << "\n After the Bubble Sort :" << "\n";
 for(int i=0;i<n;i++)
 {
   cout << arr[i] << " ";
 }
 
return 0;
}