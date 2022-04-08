#include<iostream>
using namespace std;
bool powerof2(long long n)
{
    if(n==0)
      return false;
    return ((n&(n-1))==0);
}
int main ()
{
long long n;
cin >> n;
if(powerof2(n))
    cout << "YES" << "\n";
else
    cout << "NO"<<"\n";
return 0;
}