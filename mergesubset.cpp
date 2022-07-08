#include<iostream>
using namespace std;
void mergetwosortedsubset(int arr[],int n)
{
     cout << "After the merge sort :" <<"\n";
    int low=0;
    int high = n-1;
    int mid = (low+high)/2;
    int partion = mid+1;
    while(low <=mid && partion<=high)
    {
        if(arr[low]<=arr[partion])
        {
            cout << arr[low] << " ";
            low++;
        }
        else
        {
            cout << arr[(partion)]<< " ";
            partion++;
        }
    }
    while(low<=mid)
    {
        cout << arr[low] << " ";
        low++;
    }
    while(partion<=high)
    {
        cout << arr[partion] << " ";
        partion++;
    }
}
int main ()
{
 int n;
 cin >>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin >> arr[i];
 }
  cout << "Before the merge sort :" << " \n";
  for(int i=0;i<n;i++)
 {
    cout << arr[i] << " ";
 }
 cout << "\n";
 mergetwosortedsubset(arr,n);

return 0;
}