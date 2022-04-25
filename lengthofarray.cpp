#include<bits/stdc++.h>
using namespace std;
int length(char s[])
{
   if(s[0]=='\0')
      return 0;
   int smalloutput = length(s+1);
   return 1+smalloutput;
}
int main()
{
   char str[100];
   cin>>str;
   int res = length(str);
   cout<<res<<"\n";
   return 0;
}
