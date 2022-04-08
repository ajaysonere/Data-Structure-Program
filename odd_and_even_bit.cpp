#include<iostream>
using namespace std;
int swep(int n)
{
    int oddmask = 0x55555555;
    int evenmask= 0xAAAAAAAA;
    oddmask &=n;
    evenmask &=n;
    oddmask <<=1;
    evenmask >>=1;
    n = oddmask^evenmask;
    return n;
}
int main ()
{
  int n;
  cin >>n;
  cout << swep(n);
return 0;
}