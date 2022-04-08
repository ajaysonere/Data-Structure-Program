#include<iostream>
using namespace std;
int bit_difference(int a,int b)
{
   int c = a^b;
   int count=0;
    while(c>0)
    {
       c = (c&(c-1));
       count++;
     }
     return count;
}
int main ()
{
int a,b;
cin >> a >>b;
cout << bit_difference(a,b);
return 0;
}