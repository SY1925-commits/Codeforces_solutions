#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
   int t, n, flag;
   unordered_map<int, int> f;
   cin >> t;
   for(int i=0; i<t; i++) {
      flag = 0;
      f.clear();
      cin >> n;
      f[2] = 0;
      while((n%2) == 0) {
         f[2]++;
         n /= 2;
      }
      while((n%3) == 0) {
         f[3]++;
         n /= 3;
      }
      if(n>1)
         flag = 1;
      if(flag == 1)
         cout << -1 << "\n";
      else {
         if(f[2] > f[3])
            cout << -1 << "\n";
         else
            cout << 2*f[3] - f[2] << "\n";
      }
   }

   return 0;
}