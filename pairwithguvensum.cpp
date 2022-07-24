#include<iostream>
#include<unordered_set>
using namespace std;
bool pairSumSortedarray(int arr[],int size,int sum){
    // for sorted array 
    int low=0;
    int high = size-1;
    while(low<high){
        if(arr[low]+arr[high]>sum){
             high--;
        }else if(arr[low]+arr[high]==sum){
            return true;
        }else
        {
            low++;
        }
    }
    return false;
}
bool pairSumSortedarray1(int arr[],int size,int sum){
    // for sorted array 
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                return true;
            }
        }
    }
    return false;
}

bool pairSumSortedarray2(int arr[],int size,int sum){
    unordered_set<int> s;
    for(int i=0;i<size;i++){
        if(s.find(sum-arr[i]) != s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main ()
{
 cout <<"Enter the size of the array :" << "\n";
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 cout << "Enter the key :" << "\n";
 int sum;
 cin >> sum;
 bool ans =  pairSumSortedarray2(arr,size,sum);
 if(ans == true){
    cout << "Yes" <<"\n";
 }else{
    cout <<"No" << "\n";
 }
 return 0;
}