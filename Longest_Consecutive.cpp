#include<iostream>
using namespace std;
int Longest_Consecutive(int n)
{
    int count =0;
    while(n>0)
    {
      n = n&(n<<1);
      count++;
    }
    return count;
}
int main ()
{
int n;
cin >> n;
cout << Longest_Consecutive(n);
return 0;
}