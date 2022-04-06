#include<iostream>
using namespace std;

int main ()
{
int number,k;
cin >> number >>k;
number = number>>k-1;
if(number&1==1)
   {
       cout << "It Is Set Bit :";
   }
else
  {
    cout <<"It is not Set Bit :";
  }

return 0;
}