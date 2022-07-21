#include<iostream>
using namespace std;
struct myhash
{
    int *arr;
    int cap,size;
    myhash(int cap){
        this->cap = cap;
        size = 0;
        for(int i=0;i<cap;i++){
            arr[i] == -1;
        }
    }
    int hash(int key)
    {
       return (key%cap);
    }
    bool search(int key){
        cout << "Search function :" << "\n";
        int h = hash(key);
        int i = h;
        while(arr[i]== -1){
            if(arr[i]==key){
                return true;
            }
            i = (i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;
    }
    bool insert(int key){
        cout << "insert function :" << "\n";
        int h = hash(key);
        int i=h;
        if(size == cap){
            return false;
        }
        while(arr[i] != -1 && arr[i] != -2 && arr[i] != key){
            i = (i+1)%cap;
        }
        if(arr[i] == false){
            return false;
        }
        else{
            arr[i] = key;
            size++;
            return true;
        }
    }
    bool erase(int key){
        int h = hash(key);
        int i=h;
        while(arr[i]!= -1){
            if(arr[i] == key){
                arr[i] = -2;
                return true;
            }
            i = (i+1)%cap;
            if(i==h){
                return false;
            }
        }
        return false;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout << arr[i]<< " ";
        }
        cout << "\n";
    }
    
};
int main ()
{
  myhash h(7);
  h.insert(10);
  h.insert(20);
  h.insert(30);
  h.insert(40);
  h.insert(50);
  h.insert(60);
  h.insert(70);
  h.search(30);
  h.print();
 
 return 0;
}