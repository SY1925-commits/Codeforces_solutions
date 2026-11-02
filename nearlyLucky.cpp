#include <iostream>
using namespace std;

int main() {
   long long n;
   int comp, count=0;
   cin >> n;
   while(n!=0) {
      comp = n%10;
      if(comp == 4 || comp == 7)
         count++;
      n/=10;
   }
   if(count == 4 || count == 7)
      cout << "YES";
   else
      cout << "NO";

   return 0;
}