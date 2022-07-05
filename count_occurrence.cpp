#include<iostream>
#include<vector>
using namespace std;
int  first_occurrence(vector<int>&v,int key)
{
    int low = 0;
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
          if(mid==0 || v[mid-1]!= v[mid])
          {
            return mid;
          } 
          else{
            high = mid-1;
          }
        }
    }
    return -1;
}
int last_occurrence(vector<int>&v,int key)
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
      else if (key<v[mid])
      {
        high = mid-1;
      }
      else
      {
        if(mid == 0 || v[mid+1] != v[mid])
        {
            return mid;
        }
        else
        {
            low = mid+1;
        }
      }
    }
}
int count_occurence(vector<int>&v,int key)
{
    int first =  first_occurrence(v,key);
    if(first==-1)
    {
        return 0;
    }
    return ((last_occurrence(v,key)-first)+1);
}
int main ()
{
 cout << "Enter the size of the vector :" << "\n";
 int size;
 cin >> size;
 vector<int> v;
 int value;
 for(int i=0;i<size;++i)
 {
    cin >> value;
    v.push_back(value);
 }
 int key;
 cout <<"Enter the key "<<"\n";
 cin >> key;
 last_occurrence(v,key);
 cout << "Occurrence Of key is :" << count_occurence(v,key) << "\n";
 return 0;
}