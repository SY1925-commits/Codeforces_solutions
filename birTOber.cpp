#include <iostream>
#include <string>
using namespace std;

int main() {
   int len;
   string s, t;
   cin >> s; 
   cin >> t;
   if(s.length() != t.length()) {
      cout << "NO";
      exit(0);
   }
   else {
      for(int i=0; i<s.length(); i++) {
         if(s[i] != t[t.length()-i-1]) {
            cout << "NO";
            exit(0);
         }
      } 
   }
   cout << "YES";

   return 0;
}