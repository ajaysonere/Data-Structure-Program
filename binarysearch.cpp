#include<iostream>
#include<vector>
using namespace std;
// binary search on vector by iterative solution
int Binary_search(vector<int> &v,int key)
{
    int n = v.size();
    int s = 0;
    int l = n-1;
    while(s<=l)
    {
      int mid = (s+l)/2;
      if(v[mid]==key)
      {
        return mid;
      }
      if(key>v[mid])
      {
         s = mid+1;
      }
      else
      {
        l = mid-1;
      }
    }
    return -1;
}

// Binary search on array by recursion
int binary_search(int arr[],int key,int s,int l)
{
   while(s<=l)
   {
      int mid = (s+l)/2;
      if(arr[mid]==key)
       {
         return mid;
       }
     if(key>arr[mid])
       {
        return binary_search(arr,key,mid+1,l);
       }
     else
      {
       return binary_search(arr,key,s,mid-1);
      }
   }
   return -1;
}
int main ()
{
 cout << "Enter the size of the array and vector " <<"\n";
 int n;
 cin >> n;
 vector<int> v;
 int arr[n];
 int value;
 for(int i=0;i<n;i++)
 {
   cin >> arr[i];
   v.push_back(arr[i]);
 }
 cout << "Enter the key ,which you want to search :" <<"\n";
 int key;
 cin >> key;
cout << "Element is found at index : "<<Binary_search(v,key) << " "<< "\n";
cout << "Element is found at index : "<<binary_search(arr,key,0,(n-1)) << " "<<"\n";
return 0;
}

