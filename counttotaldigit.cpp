#include<iostream>
using namespace std;
int sumofdigits(int n)
{
   static int c =0;
   if(n==0)
     return c;
   else{
     c++;
     sumofdigits(n/10);
}
}
int main()
{
  static int n;
  cin >>n;
  cout << sumofdigits(n);
  return 0;
}
