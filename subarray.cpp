#include<iostream>
#include<unordered_set>
using namespace std;
bool isSubarray(int  arr[],int size){
    cout << "Time Complexity is O(n2) :" << "\n";
    for(int i=0;i<size;i++){
        int ans =0;
        for(int j=i;j<size;j++){
            ans+=arr[j];
            if(ans==0){
                return true;
            }
        }
    }
    return false;
}
bool isSubarray1(int arr[],int size){
    unordered_set<int> s;
    int ans = 0;
    for(int i=0;i<size;i++){
        ans += arr[i];
        if(s.find(ans) != s.end()){
            return true;
        }else if(ans==0){
            return true;
        }
        s.insert(ans);   

    }
    return false;
}
int main ()
{
 cout << "Enter the size of the array :" << "\n";   
 int size;
 cin >> size;
 int arr[size];
 cout << "Enter the element of the array : " << "\n";
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 if(isSubarray1(arr,size)==true){
    cout << "Yes" << "\n";
 }else{
    cout<< "No"<<"\n";
 }

 return 0;
}