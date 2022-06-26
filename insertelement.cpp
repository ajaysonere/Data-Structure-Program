#include<iostream>
using namespace std;

int main ()
{
 int *arr = new int [100];
 int i;
 int size = 5;
 int capacity = 100;

 for(i=0;i<5;i++)
 {
     cin>> arr[i];
 }
 cout << "Before the insert element at the end " << "\n";
 for(int j=0;j<size;j++)
 {
     cout << arr[j] << " ";
 }
 cout << "\n Enter the Value You want to put in the array:" << " \n";
 int value;
 cin >> value;  
 if(size<capacity)
 {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    arr[i] = value;
    size++;
 }
 
 cout << "After the insert element at the end " << "\n";
 for(int j=0;j<size;j++)
 {
     cout << arr[j] << " ";
 }

return 0;
}