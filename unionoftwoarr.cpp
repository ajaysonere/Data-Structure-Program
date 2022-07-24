#include<iostream>
#include<unordered_set>
using namespace std;
int unionofarr(int a[],int b[],int m,int n){
    unordered_set<int> s;
    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }
    for(int j=0;j<n;j++){
        s.insert(b[j]);
    }
   return s.size();
}
int main ()
{
 cout << "Enter the size of the array a and b :" << "\n";
 int m,n;
 cin >> m >> n;
 int a[m];
 int b[n];
 cout << "Enter the element of the array a :" << "\n";
 for(int i=0; i<m;i++){
    cin >> a[i];
 }
 cout <<"Entet the element of the array b :" << "\n";
 for(int j=0;j<n;j++){
    cin >> b[j];
 }
 cout << "The union of two element :" <<  unionofarr(a,b,m,n) <<"\n";
 return 0;
}