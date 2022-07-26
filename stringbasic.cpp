#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
 char x= 'Z';
 cout << int (x) << "\n";
 int z = 97;
 cout << char (z) << "\n";
 int arr[] = {10,20,30};
 cout << sizeof(arr) << "\n";
 char str1[] = {'a','b','c'};
 cout << str1 << "  ";
 cout << endl << sizeof(str1);
 char str2[] = "abc";
 cout << str2 << " ";
 cout << " STR LEN :" << strlen(str2) << "\n";
 cout << "\n" << sizeof(str2) << "\n";
 return 0;
}