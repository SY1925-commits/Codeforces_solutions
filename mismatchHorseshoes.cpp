#include <iostream>
#include <set>
using namespace std;

int main() {
   set<int> n;
   for(int i=0; i<4; i++) {
      int x;
      cin >> x;
      n.insert(x);
   }
   cout << 4 - n.size();
   
   return 0;
}