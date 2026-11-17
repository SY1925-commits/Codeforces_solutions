#include <iostream>
using namespace std;

int main() {
   int t, a, b, c, x1, x2, x3;
   cin >> t;
   for(int i=0; i<t; i++) {
      cin >> a >> b >> c;
      x1 = ((2*b) - c);
      x2 = ((2*b) - a);
      x3 = (a + c);
      if(((x1>0) && ((x1%a) == 0)) || ((x2>0) && ((x2%c) == 0)) || ((x3>0) && ((x3%(2*b)) == 0)))
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }

   return 0;
}