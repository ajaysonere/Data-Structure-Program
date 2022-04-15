#include<iostream>
using namespace std;
int myjosephus(int n,int k)
{
  if(n==1)
    return 0;
  return (myjosephus(n-1,k)+k)%n;
}
int josephus(int n,int k)
{ 
  return myjosephus(n,k)+1;
}
int main()
{
   int n,k;
   cin >> n >> k;
   cout << josephus(n,k);
   return 0;
}
