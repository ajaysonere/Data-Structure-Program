#include<iostream>
using namespace std;
int partitionByLomuto(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i=low-1;
    int j=high+1;
    while(true){
      do{
        i++;
      }while(arr[i]<pivot);
      do{
        j--;
      }while(arr[j]>pivot);
      if(i>=j){
        return j;
      }
      swap(arr[i],arr[j]);
    }
}
void quicksortByLomuto(int arr[],int low,int high)
{
    if(low<high){
        int partition = partitionByLomuto(arr,low,high);
        quicksortByLomuto(arr,low,partition);
        quicksortByLomuto(arr,partition+1,high);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main ()
{
  cout << "Enter the size of the array :" << "\n";
  int size;
  cin >> size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin >>arr[i];
  }
  quicksortByLomuto(arr,0,size-1);
  cout << "Sort by Quick sort :" << "\n";
  printArray(arr,size);

 return 0;
}