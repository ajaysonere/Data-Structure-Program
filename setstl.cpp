#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main ()
{
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin >> arr[i];
 }
 set <int> s;
 for(int i=0;i<n;i++){
    s.insert(arr[i]);
 }
 cout << s.size() << "\n";
 for(set<int> :: iterator itr = s.begin();itr != s.end();itr++){
    cout << *itr << " ";
 }
 cout << "\n";
 s.erase(40);
 for(set<int>:: iterator itr = s.begin();itr != s.end();itr++){
    cout << *itr << " ";
 }
 cout << "\n";
 //s.clear();
 for(set<int> :: iterator itr = s.begin();itr != s.end();itr++){
    cout << *itr << " ";
 }
 cout << "\n";
 cout << *s.lower_bound(20) << "\n";
 cout << *s.upper_bound(20) << "\n";
 if(s.find(60) != s.end()){
    cout << "found " << "\n";
 }else{
    cout << "not found " << "\n";
 }
 return 0;
}