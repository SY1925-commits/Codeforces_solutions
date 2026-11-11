#include <iostream>
#include <string>
using namespace std;

int main() {
   int n;
   string s1, s2;
   char t;
   cin >> n;
   for(int i=0; i<n; i++) {
      cin >> s1 >> s2;
      t = s1[0];
      s1[0] = s2[0];
      s2[0] = t;
      cout << s1 << " " << s2 << endl;
   }
   
   return 0;
}