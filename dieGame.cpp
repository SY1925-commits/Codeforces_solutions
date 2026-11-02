#include <iostream>
using namespace std;

int main() {
   int n, m, mC=0, c, cC=0;
   cin >> n;
   for(int i=0; i<n; i++) {
      cin >> m >> c;
      if(m>c)
         mC++;
      else if(m<c)
         cC++;
   }
   if(mC>cC)
      cout << "Mishka";
   else if(cC>mC)
      cout << "Chris";
   else
      cout << "Friendship is magic!^^";
   
   return 0;
}