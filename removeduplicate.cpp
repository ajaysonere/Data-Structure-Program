#include<iostream>
using namespace std;
void removeduplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=0;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main ()
{
 int size;
 cin >> size;
 int *arr = new int[size];
 for(int i=0;i<size;i++)
 {
     cin >>arr[i];
 }
 removeduplicate(arr,size);
 delete [] arr;
return 0;
}