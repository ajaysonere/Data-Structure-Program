#include<iostream>
using namespace std;
int tower_of_hanoi(int n,int a,int b,int c)
{ 
    int count = 0;
   if(n==1)
   {
   	cout << "Move disc 1 from rod " << a << " to  rod " <<c << "\n";
   	count++;
   	return 1;
   }
   count++;
   tower_of_hanoi(n-1,a,c,b);
   cout << "Move disc "<< n << " from " << " rod " << a << " to rod " <<c << "\n";
   tower_of_hanoi(n-1,b,a,c);
   return count;
}

int main()
{
   int n;
   cin >>n;
   cout << tower_of_hanoi(n,1,2,3) << "\n";
}
