#include <iostream>
using namespace std;

int main() {
   int n, h, f[1000], w=0;
   cin >> n >> h;
   for(int i=0; i<n; i++) {
      cin >> f[i];
      if(f[i]>h) {
         f[i] /= 2;
         w += 2;
      }
      else {
         w++;
      }
   }
   cout << w;
   
   return 0;
}