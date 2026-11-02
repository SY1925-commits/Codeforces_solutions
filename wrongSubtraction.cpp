#include <iostream>
using namespace std;

int main() {
   int s, n;
   cin >> s >> n;
   for(int i=0; i<n; i++) {
      if(s%10!=0)
         s--;
      else
         s/=10;
   }
   cout << s;
   
   return 0;
}