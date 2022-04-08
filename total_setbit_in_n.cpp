#include<iostream>
using namespace std;
int largest_range_of_number(int);
int Set_bit_in_number(int n)
{
    if(n==0)
       return 0;
    int x = largest_range_of_number(n);
    int count_setbit = x*(1<<(x-1));
    int after_thepower_of_2 = n-(1<<x)+1;
    int rest_setbit = n-(1<<x);
    int ans  = count_setbit + after_thepower_of_2 + Set_bit_in_number(rest_setbit);
    return ans;
}
int largest_range_of_number(int n)
{
    int x = 0;
    while((1<<x)<= n)
    {
      x++;
    }
    return x-1;
}
int main ()
{
int n;
cin >> n;
cout << Set_bit_in_number(n) << "\n";
return 0;
}