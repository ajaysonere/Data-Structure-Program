#include<iostream>
#include<vector>
using namespace std;
int print_leaders(vector<int> &v)
{
    int n = v.size();
    int current_leader = v[n-1];
    cout << v[n-1] << " ";
    for(int i=n-2;i>0;i--)
    {
        if(v[i]>current_leader)
        {
           cout<<v[i]<< " ";
           current_leader = v[i];
        }
    }
}
int main ()
{
cout <<"Enter the Size of the array :" << "\n";
int size;
cin >> size;
vector<int> v;
int value;
for(int i=0;i<size;i++)
{
   cin >> value;
   v.push_back(value);
}
print_leaders(v);
return 0;
}