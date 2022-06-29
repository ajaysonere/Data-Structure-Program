#include<iostream>
#include<vector>
using namespace std;
vector<int>
 left_rorate(vector<int> &v)
{
   int temp = v[0];
   for(int i=1;i<v.size();i++)
   {
     v[i-1] = v[i];
   }
   v[(v.size())-1]  = temp;
  for(vector<int>::iterator itr = v.begin();itr !=v.end();itr++)
  {
    cout << *itr << " ";
  }
  return v;
}
int main ()
{
  vector <int> v;
  int value;
  for(int i=0;i<5;i++)
  {
    cin >> value;
    v.push_back(value);
  }
  for(int i=0;i<5;i++)
  {
    cout<<v[i] <<" ";
  }
  cout <<"\n";
 vector<int> m =  left_rorate(v);
 for(int i=0;i<5;i++)
  {
    cout<<v[i] <<" ";
  }
return 0;
}