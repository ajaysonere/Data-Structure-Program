#include<iostream>
using namespace std;
int palindrome(int n)
{
   static int d = 0;
   if(n==0)
      return d;
   d = d*10+n%10;
   palindrome(n/10);
}
int main()
{
	int n;
	cin >> n;
	int a =n;
	int d = palindrome(a);
	if(d==n)
	   {
	   	cout << "Number is palindrom :" << "\n";
	   }
        else{
        	cout<< "Number is not palindrom :" "\n";
	}
	return 0;
}
