/*   #Test case 1 -  I/P  - { 10 ,5,2,3,6} , Sum = 8;
                     O/P  - 2
      Test case 2 -  I/P  - {1,2,3} , Sum = 4;
                     O/P  - 1
      Test case 3 -  I/P  - {10,20,15} , Sum = 37;
                     O/P  - 0
      Test case 4 -  I/P  - {10,54,23} , Sum = 0;
                     O/P  - 1
*/ 



#include<iostream>
#include<vector>
using namespace std;
int sumofsubset(vector<int> &v,int n,int sum)
{
    if(n == 0)
     return (sum==0)?1:0;
    return sumofsubset(v,n-1,sum)+sumofsubset(v,n-1,sum-v[n-1]);
}

int main ()
{
int value;
vector<int> v;
for(int i=0;i<5;i++)
{

    cin >> value;
    v.push_back(value);
}
int sum ;
cin >> sum;
int n= v.size();
cout << sumofsubset(v,n,sum) << "\n"; 

return 0;
}