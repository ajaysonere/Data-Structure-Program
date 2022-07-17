#include<iostream>
using namespace std;

int main ()
{
int m,n;
cin >> m >> n;
m = m^(1<<n);
cout<< m;

return 0;
}