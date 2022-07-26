#include<iostream>
#include<unordered_set>
using namespace std;
bool issubarraysum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        int ans = 0;
        for(int j=i;j<size;j++){
            ans +=arr[i];
            if(ans==sum){
                return true;
            }
        }
    }
    return true;
}
bool issubarraysum1(int arr[],int size,int sum,unordered_set <int> &s){
    int ans =0;
    for(int i=0;i<size;i++){
        if(ans == sum){
            return true;
        }
        ans += arr[i];
        if(s.find(ans-sum) != s.end()){
            return true;
        }
        s.insert(ans);
    }

    return false;
}

int main ()
{
 cout << "Enter the size of the array :" << "\n";
 unordered_set <int> s;
 int size;
 cin >> size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin >> arr[i];
 }
 cout << "Enter the sum element :" << "\n";
 int sum;
 cin >> sum;
 if(issubarraysum1(arr,size,sum,s)== true){
    cout << "Yes" << "\n";
 }else{
    cout<<"No" << "\n";
 }
 for(unordered_set <int> :: iterator itr = s.begin(); itr != s.end(); itr++){
    cout << *itr << " ";
 }
 cout << "\n";
 return 0;
}