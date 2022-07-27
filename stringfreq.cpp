#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
 string str;
 cin >> str;
 int count[26] = {0};
 for(int i=0;i<str.length();i++){
    count[str[i]-'a']++;
 }
 for(int i=0;i<26;i++){
    if(count[i]>0){
        cout << (char)(i+'a') << " " << count[i] << "\n";
    }
 }
 return 0;
}