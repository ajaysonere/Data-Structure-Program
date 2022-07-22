#include<iostream>
#include<utility>
using namespace std;
pair<int ,int> fun(int a,int b){
    int c= a+b;
    int d =a-b;
    pair<int,int> ans ;
    ans.first = c;
    ans.second = d;
    return ans;
}
int main ()
{
  int a,b;
  cin >> a >> b;
  pair<int ,int> p1;
  p1.first = a;
  p1.second = b;
  cout << p1.first << " " << p1.second << "\n";
  pair <int ,int > ans = fun(a,b);
  cout << ans.first <<" " << ans.second << "\n";
  pair<int ,int> p2;
  p2 = make_pair(56,64);
  cout << p2.first <<" " << p2.second << "\n";

return 0;
}