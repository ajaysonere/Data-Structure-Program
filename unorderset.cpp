#include<iostream>
#include<unordered_set>
#include<iterator>
using namespace std;

int main ()
{
 int arr[7];
 for(int i=0;i<7;i++){
    cin >> arr[i];
 }
 unordered_set <int> s;
 for(int i=0;i<7;i++){
    s.insert(arr[i]);
 }
 cout << s.size() << "\n";
 for(unordered_set<int> :: iterator itr = s.begin();itr != s.end();itr++){
    cout << *itr << " "; 
 }
 cout << "\n";
 s.erase(20);
 cout << s.size();
 for(unordered_set <int> :: iterator itr = s.begin();itr != s.end();itr++){
    cout << *itr << " ";
 }
 cout << "\n";
 if(s.find(20) != s.end()){
    cout << "Found :" << "\n";
 }
 else
 {
    cout << "Not Found " << "\n";
 }
 return 0;
}