#include<iostream>
#include<vector>
using namespace std;
int first_ocurrence(vector<int>&v,int key)
{
    int n = v.size();
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(v[mid]==key)
        {
            while(key==v[mid-1])
            {
                mid--;
            }
            return mid;
        }
        if(key>v[mid])
          low = mid+1;
        else
        high = mid-1;
    }
    return -1;
}
int main ()
{
 cout <<"Size of Array :" << "\n";
 int n;
 cin >> n;
 int value;
 vector<int>v;
 for(int i=0;i<n;i++)
 {
    cin>>value;
    v.push_back(value);
 }
 cout << "Enter the element you want to search :"<<"\n";
 int key;
 cin>>key;
 cout << first_ocurrence(v,key) << "\n";
return 0;
}