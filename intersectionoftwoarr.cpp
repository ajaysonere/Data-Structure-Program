#include<iostream>
#include<unordered_set>
using namespace std;
int intersection(int a[],int b[],int m,int n){
    cout << "This is naive apporaches :" << "\n";
    // time complexity is - O(m*(m+n))
    int res =0;
    for(int i =0;i<m;i++){
        bool flag = false;
        for(int j=0; j<i;j++){
           if(a[i]==a[j]){
            flag = true;
            break;
           }
        }
        if(flag == true){
         continue;
        }
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                res++;
                break;
            }
        }
    }
    return res;
}
int intersection1(int a[],int b[],int m,int n){
    unordered_set<int> s;
    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }
    int res =0;
    for(int j=0;j<n;j++){
        if(s.find(b[j])!=s.end()){
            res++;
            s.erase(b[j]);
        }
    }
    return res;
}

int main ()
{
 cout <<"Enter the size of the array a and b :" << "\n";
 int m,n;
 cin >> m >> n; 
 int a[m];
 int b[n];
 cout << "Enter the element of the array a :" << "\n";
 for(int i=0;i<m;i++){
    cin  >> a[i];
 }
 cout << "Enter the element of the array b " << "\n";
 for(int j=0;j<n;j++){
    cin >> b[j];
 }
 cout << "The number of element are same in both the array is :" << intersection(a,b,m,n) << "\n";
 cout << "The number of element are same in both the array is :" << intersection1(a,b,m,n) << "\n";
 return 0;
}