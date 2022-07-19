#include<iostream>
#include<list>
using namespace std;
struct myhash
{
    int bucket ;
    list <int> *table;
   myhash(int key){
        cout << "construction is called :" << "\n";
        bucket = key;
        table = new list <int> [key];
    }
    void insert(int key){

        int i= bucket%key;
        table[i].push_back(key);
    }
  void remove (int key){
        int i= bucket%key;
        table[i].remove(key);
    }
  bool search(int key){
    int i= bucket%key;
    for(auto x : table[i]){
        if(x==key){
            return true;
        }
    }
    return false;
  }
   void display(){
    for(int i=0;i<bucket;i++){
        cout << i ;
        for(auto x:table[i]){
            cout << "-->" << x;
        }
        cout << "\n";
    }
   }
};
int main ()
{
 int key = 5;
 int arr[5];
 for(int i=0;i<5;i++){
    cin >> arr[i];
 }
 myhash h(key);

 for(int i=0;i<key;i++){
    h.insert(arr[i]);
 } 
  h.display();
 int r;
 cin >> r;
 h.remove(r);


 

 return 0;
}