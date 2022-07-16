#include<iostream>
using namespace std;

int main ()
{
int number,n;
cin >> number >> n;
number = number & (~(1<<n));
cout << number;
return 0;
}