#include<iostream>
#include<vector>
using namespace std;
int  linear_search(vector<int>&v,int key)
{
   for(int i=0;i<v.size();i++)
   {
     if(v[i] == key)
     {
       cout << "Element "<< key << " is found at index number " << i << "\n";
       return 0; 
     }
   }
   return -1;
}

int main ()
{
 cout << "Enter the size of the array" <<"\n";
 int size;
 cin>> size;
 vector<int> v;
 int value;
 for(int i=0;i<size;i++)
 {
    cin >> value;
    v.push_back(value);
 }
 cout << "Enter the key , you want to search " << " \n";
 int key;
 cin >> key;
 linear_search(v,key);
return 0;
}