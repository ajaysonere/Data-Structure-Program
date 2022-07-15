#include<iostream>
using namespace std;

int main ()
{
 int arr[]= {10,20,30,40,50};
 int k;
 cin >> k;
 for(int i=0;i<5;i++)
 {
     if(k==arr[i])
     {
         cout << " the key is founded in array" <<" "<< i <<endl;
         break;
     }
 }
  
 


return 0;
}