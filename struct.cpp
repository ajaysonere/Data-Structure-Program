#include<iostream>
#include<algorithm>
using namespace std;
struct compair
{
  int x,y;
 
};
 bool mycom(compair c1,compair c2)
  {
    return (c1.x < c2.x);
  }
int main ()
{   
    int n = 3;
    compair s[] = {{10,2},{3,5},{5,6}};
    sort(s,s+n,mycom);
    for(auto i: s)
    {
      cout<<i.x<<" " << i.y << "\n";
    }
return 0;
}