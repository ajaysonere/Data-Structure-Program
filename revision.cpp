#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    cout << "Bubble Sort :"<< "\n";
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void selection_sort(int arr[],int n)
{
    cout << "Selection Sort :" << "\n";
    int min_index = 0;
    for(int i=0;i<n-1;i++)
    {
        min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
void insertion_sort(int arr[],int n)
{
    cout << "Insertion Sort :" << "\n";
    for(int i=0;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int merge(int arr[],int low,int high)
{
    int mid = (low+high)/2;
    int n1 = mid-low+1;
    int n2 = high-mid;
    int L[n1];
    int R[n2];
    int mainarrayindex = low;
    for(int i=0;i<n1;i++)
    {
       L[i] = arr[mainarrayindex++];
    }
    mainarrayindex = mid+1;
    for(int i=0;i<n2;i++)
    {
        R[i] = arr[mainarrayindex++];
    }

    int i =0;
    int j =0;
    mainarrayindex = low;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[mainarrayindex++] = L[i++];
        }
        else
        {
            arr[mainarrayindex++] = R[j++];
        }
    }
    while(i<n1)
    {
        arr[mainarrayindex++] = L[i++];
    }
    while(j<n2)
    {
        arr[mainarrayindex++] = R[j++];
    }
}
void  merge_sort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid = (low+high)/2;
   merge_sort(arr,low,mid);
   merge_sort(arr,mid+1,high);
   merge(arr,low,high); 
}
void print_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "\n";
}
int main ()
{
     cout << "Enter the size of the element :"<< "\n";
  int n;
  cin >> n;
  int arr[n];
 cout << "enter the element for array :" << "\n";
 for(int i=0;i<n;i++)
 {
    cin>> arr[i];
 }
 bubble_sort(arr,n);
 print_arr(arr,n);
 cout << "enter the element for array :" << "\n";
 for(int i=0;i<n;i++)
 {
    cin>> arr[i];
 }
 selection_sort(arr,n);
 print_arr(arr,n);
 cout << "enter the element for array :" <<"\n";
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 insertion_sort(arr,n);
 print_arr(arr,n);
 cout<< "enter the element for the array :" << "\n";
 for(int i=0;i<n;i++)
 {
    cin >>arr[i];
 }
 merge_sort(arr,0,n-1);
 print_arr(arr,n);
return 0;
}