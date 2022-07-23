#include<iostream>
#include<unordered_set>
using namespace std;
int countDistinct(int arr[],int size){
    unordered_set<int> s;
    for(int i=0;i<size;i++){
        s.insert(arr[i]);
    }
    return (s.size());
}
int main ()
{
 cout << "Enter the size of the array :" << "\n";
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 cout << "The Count of Distinct Element :" << countDistinct(arr,size) << "\n";

 return 0;
}