#include<iostream>
#include<vector>
using namespace std;
// by  recursion 
int R_last_accurrence(vector<int> &v,int key)
{
  int low =0;
  int high = v.size()-1;
  while(low<=high)
  {
    int mid = (low+high)/2;
    if(key>v[mid])
    {
      low = mid+1;
    }
    else if(key<v[mid])
    {
      high = mid-1;
    }
    else
    {
      if(mid==0 || v[mid+1]!=v[mid])
      {
        return mid;
      }
      else{
        low = mid+1;
      }
    }
  }
  return-1;
}
int main ()
{
  vector<int> v;
  cout <<"Enter the size of the vector :" << "\n";
  int size;
  cin >> size;
  int value;
  for(int i=0;i<size;++i)
  {
    cin >> value;
    v.push_back(value);
  }
  int key;
  cout <<"Enter the key "<< "\n";
  cin >> key;
  cout << "By Recursion : " <<R_last_accurrence(v,key);
  int low = 0;
  int high = v.size()-1;
  bool fall = false;
  while(low<=high)
  {
    int mid = (low+high)/2;
    if(key>v[mid])
    {
      low = mid+1;
    }
    else if (key<v[mid])
    {
      high= mid-1;
    }
    else
    {
      if(mid == 0 || v[mid+1]!=v[mid])
      {
        cout << " \nBY Iteration "<< mid << "\n";
       fall = true;
       return 0;
      }
      else{
        low = mid+1;
      }
    }
  }
  if(fall != true)
  {
    cout << "BY Iteration " << -1 << "\n";
  }
return 0;
}