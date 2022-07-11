#include<iostream>
using namespace std;
 // By lemuto partition  
int Quick_partition(int arr[],int low,int high)
{
  int pivot = arr[high];
  int i = low-1;
  for(int j=low;j<high;j++){
    if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);

}
void Quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int partion = Quick_partition(arr,low,high);
        Quick_sort(arr,low,partion-1);
        Quick_sort(arr,partion+1,high);
    }
}
void print_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main ()
{
 cout << "Enter the size of the array :" << "\n";
 int n;
 cin>> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin >> arr[i];
 }
 Quick_sort(arr,0,n-1);
 print_arr(arr,n);
return 0;
}