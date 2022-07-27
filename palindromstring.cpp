#include<iostream>
#include<string.h>
using namespace std;
bool ispalindrom(string str){
    int low = 0;
    int high = str.length()-1;
    while(low<high){
        if(str[low] != str[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}
int main ()
{
 string str;
 cin >> str;
 if(ispalindrom(str)){
    cout << "Yes " << "\n";
 }else{
    cout << "No" <<"\n";
 }
 return 0;
}