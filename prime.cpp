#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n==1)
    {
        cout << "Not Prime " << "\n";
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        cout << "Not Prime " << "\n";
    }
        cout << " Prime " << "\n";
}

int main ()
{
int n;
cin >> n;
isprime(n);
return 0;
}