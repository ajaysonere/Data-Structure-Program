#include<iostream>
using namespace std;
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
void mergesort(int arr[],int low,int high)
{
    if(low>=high)
       return;
    int mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high);
}
int main ()
{
 cout << "Enter the size of the array :" << " \n";
 int n;
 cin >>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin >> arr[i];
 }
 mergesort(arr,0,n-1);
 cout << "After the merge sort :" << "\n";
 for(int i=0;i<n;i++)
 {
    cout << arr[i] << " ";
 }
 cout << "\n";
 return 0;
}