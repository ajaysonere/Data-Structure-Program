#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
  string str;
  str = "geeksforgeeks";
  cout << str << "\n";
  str = str + " For geeks";
  cout << str << "\n"; 
  cout << str.substr(4,6) << "\n";
  cout << str.find("For") << "\n";
  string s1 = "abc";
  string s2 = "xyz";
  if(s1>s2){
    cout << "Greater :" << "\n";
  }else if(s1==s2){
    cout << " Equal to" << "\n";
  }else{
    cout << "Smaller " << "\n";
  }
  string name;
  cout << "Enter your full name :" << "\n";
  // cin >> name  , it won't be able to read full string .
  getline(cin , name);
  cout << "Your name is : "<< name << "\n";  
  for(char x:name){
    cout << x << " ";
  }
  cout << "\n";
  for(int i=0;i<name.length();i++){
    cout << i << " ";
  }
  cout << "\n";
  return 0;
}