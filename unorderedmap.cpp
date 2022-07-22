#include<iostream>
#include<unordered_map>
using namespace std;

int main ()
{
 cout <<"Entre the size of the map" << "\n";
 int size;
 cin >> size;
 unordered_map<int ,string> um;
 cout << "The size of the Unordered map is :" <<um.size()  << "\n";
 int a;
 string s;
 for(int i=0;i<size;i++){
    cin >> a;
    cin >> s;
    um.insert(make_pair(a,s));
 }
 cout << "The size of the Unordered map is :" << um.size() << "\n";
for(unordered_map<int ,string>::iterator itr = um.begin(); itr != um.end();itr++){
   cout << (*itr).first << " " << (*itr).second << "\n";
}
 auto itr = um.find(20);
 if(itr != um.end()){
    cout << "key is Found :" << (*itr).first << " "<< (*itr).second <<"\n";
 }else{
    cout << "Key is not Found :" << "\n";
 }
 cout << "By simple for loop :" << "\n";
 for(auto itr = um.begin();itr != um.end();itr++){
    cout << (*itr).first << " " << (*itr).second << "\n";
 }
 cout << "By for each loop " << "\n";
 for(auto x : um){
    cout << x.first << " " << x.second << "\n";
 }
//  um.erase(1);
 um.erase(um.begin());
 cout << "After the erasing :" << "\n";
 for(auto x : um){
    cout << x.first << " " << x.second << "\n";
 }
 cout << "\n";
 return 0;
}