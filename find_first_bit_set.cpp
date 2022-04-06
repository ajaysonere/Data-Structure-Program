#include<iostream>
using namespace std;
int first_set_bit(int n)
{
    int Count = 0;
 while(n>0)
   {
      if(n&1==1)
       {
         Count++;
         return Count++;
       }
     else
      {
        Count++;
        n=n>>1;
      }
   }
}
int main ()
{
 int n;
 cin >> n;
 cout <<"Position Of first set is :" <<first_set_bit(n);
return 0;
}