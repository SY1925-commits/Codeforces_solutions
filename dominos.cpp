#include <iostream>
using namespace std;

int main() {
   int m, n, numDominoes;
   cin >> m >> n;
   if((m*n)%2)
      numDominoes = ((m*n)-1)/2;
   else
      numDominoes = (m*n)/2;
   cout << numDominoes;
   return 0;
}