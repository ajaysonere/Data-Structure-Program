#include<iostream>
#include<map>
using namespace std;

int main ()
{
 cout << "Enter the size of the array :" << "\n";
 int n;
 cin >> n; 
 map <int ,int> m;
 int a,b;
 cout << "Size is :" << m.size() << "\n";
 m.insert(pair<int,int>(1,10));
 for(int i=0;i<n;i++){
    cin >> a >> b;
    m.insert(pair<int,int>(a,b));
 }
 // m.at(9) =  120; it is compiler error   
 cout << "The map and pair is :" << "\n";
 for(map<int ,int>::iterator itr = m.begin(); itr != m.end();itr++){
    cout << (*itr).first << " " << (*itr).second << "\n";
 }
 cout << "Size of the map is :" << m.size() << "\n";
 m[6] = 60;
 for(auto itr = m.begin(); itr!= m.end();itr++){
    cout << (*itr).first << " " << (*itr).second << "\n";
 }
 cout << "Size of the pair is :" << m.size() << "\n";
if(m.find(3) != m.end()){
    cout << "Element is Present :" << "\n";
}
else{
    cout << "Element is not Present :"<< "\n";
}
cout << "After find loop :" <<"\n";
for(auto itr = m.find(3);itr != m.end();itr++){
    cout << (*itr).first << " " << (*itr).second << "\n";
}
cout << "The lower Bound is :";
auto low = m.lower_bound(3);
if(low != m.end()){
   cout << (*low).first << " " << (*low).second << "\n";
}
else{
    cout << "there is not any lower bound :" << "\n";
}
cout << "The Upper Bound is :" << "\n";
map< int,int> :: iterator high = m.upper_bound(9);
if(high != m.end()){
    cout << (*high).first << " " << (*high).second<< "\n";
} else{
    cout << "there is no greater element in map :" << "\n";
}
m.erase(m.find(3), m.end());
cout << "After the erasing element :" << "\n";
for(auto x :m){
    cout << x.first << " " << x.second << "\n";
}
cout << "\n";
 return 0;
}