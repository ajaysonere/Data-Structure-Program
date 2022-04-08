#include<iostream>
using namespace std;
int Binary_to_Gray(int b)
{
    return b^(b>>1);
}
int Gray_to_Binary(int g)
{
    int result =0;
    while(g>0)
    {
        g = g>>1;
        result = result^g;
    }
    return result;
}
int main ()
{
int b;
cin >> b;
cout << Binary_to_Gray(b) << "\n";
int g;
cin >>g;
cout << Gray_to_Binary(g) << "\n";

return 0;
}