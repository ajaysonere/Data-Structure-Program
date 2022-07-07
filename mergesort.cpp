#include<iostream>
using namespace std;
void merge_sort(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while(i<m)
    {
        cout << a[i] << " ";
        i++;
    }
    while(j<n)
    {
        cout << b[j] << " ";
        j++;
    }
}
int main ()
{
 int m,n;
 cin >> m >> n;
 int a[m];
 int b[n];
 cout <<"Enter the element :" <<"\n";
 for(int i=0;i<m;i++)
 {
    cin >> a[i];
 }
 cout << "Enter the element :" << "\n";
 for(int i=0;i<n;i++)
 {
    cin>>b[i];
 }
 int c=m+n;
 merge_sort(a,b,m,n);
return 0;
}