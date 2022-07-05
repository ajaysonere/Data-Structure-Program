#include<iostream>
#include<vector>
using namespace std;
int count_ones(vector<int>&v)
{
    int low = 0;
    int high = v.size()-1;
    int n = v.size();
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]==0)
        {
            low = mid+1;
        }
        else
        {
          if(mid==0 || v[mid-1]==0)
          {
            return (n-mid);
          }
          else{
            high=mid-1;
          }
        }
    } 
}
int main ()
{
 cout << "Enter the size of the vector " << "\n";
 int size;
 cin >> size;
 vector<int>v;
 int value;
 for(int i=0;i<size;++i)
 {
    cin >> value;
    v.push_back(value);
 }
 cout << "ONE'S in sorted Array :"<< count_ones(v) << "\n";
return 0;
}