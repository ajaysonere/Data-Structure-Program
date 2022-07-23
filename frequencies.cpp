#include<iostream>
#include<unordered_map>
using namespace std;

void print_freq(int arr[],int size){
    for(int i=0;i<size;i++){
        bool flag = false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag = true; 
                break;
            }
        }
        if(flag == true){
            continue;
        }
        int freq = 1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                freq++;
            }
        }
        cout << arr[i] << " " << freq << "\n";
    }
}
void efficient_sol(int arr[],int size){
    unordered_map <int,int> m;
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }
    for(auto itr = m.begin(); itr != m.end();itr++){
       cout << (*itr).first << " " << (*itr).second << "\n";
    }
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
 print_freq(arr,size);
 efficient_sol(arr,size);
 return 0;
}