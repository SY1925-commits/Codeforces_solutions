#include <iostream>
using namespace std;

int main() {
   int n, term, sum=0;
   cin >> n;
   for(int i=0; i<n; i++) {
      cin >> term;
      sum += term;
   }
   cout << double(sum) / double(n);
   
   return 0;
}