// Problem statement - #Given a string str and a pattern pat. You need to check whether pattern is present or not in the given string. 

#include<iostream>
#include<string.h>

using namespace std;
bool ispatternexit(string &str,string &search){
    int res = str.find(search);
    if(res == string :: npos){
        return false;
    }else{
        return true;
    }
}
int main ()
{
 string str;
 getline(cin,str);
 string search;
 cin >> search;
 if(ispatternexit(str,search)){
    cout << "Present" << "\n";
 }else{
    cout << "Not Present" << "\n";
 }
 return 0;
}