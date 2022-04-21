#include<iostream>
using namespace std;
int digit(int n)
{
  static int  count =0;
   if(n<=0)
     return 0;
   count++;
   digit(n/10);
  return count;
}

int main()
{
   int n;
   cin >> n;
  cout<< digit(n);
   return 0;
}
