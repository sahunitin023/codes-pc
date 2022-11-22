#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n = 12, s = 7;
   int flag1 = 1, flag2 = 1, temp = s, ans;
   int x = n - s + 1;
   while (x != (n - 2 * s + 1))
   {
      flag1 = flag1 * x;
      x--;
   }
   while (temp != 1)
   {
      flag2 = flag2 * temp;
      temp--;
   }
   ans = flag1 / flag2;
   if ((n - s + 1) >= s)
      cout << "Number of possible ways : " << ans;
   else
      cout << "not possible to find";
   return 0;
}