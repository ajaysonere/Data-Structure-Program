#include<iostream>
using namespace std;
const int m=3;
const int n=3;
int searchElement(int arr[m][n],int key){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return -1;
}
int main ()
{
 cout <<"Enter the element of 2-D array :" << "\n";
 int arr[m][n];
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin >> arr[i][j];
    }
 }
cout << "Enter the key element , which one you want to see :" <<"\n";
int key;
cin >> key;
int element = searchElement(arr,key);
if(element==1){
    cout << "The Element is present :" << "\n";
}
else
{
    cout << "The Element is not present :" <<"\n";
}
 return 0;
}