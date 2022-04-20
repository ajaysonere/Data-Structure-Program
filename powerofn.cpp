#include<iostream>
using namespace std;

int powerofx(int x,int n)
{ 
   if(n==0)
      return 1;
  return x*powerofx(x,n-1);
}

int main()
{
  int x,n;
  cin>>x>>n;
  cout<< powerofx(x,n) << "\n";
}
