#include <iostream>
#include <string>
using namespace std;

int main() {
   int n;
   cin >> n;
   string str;
   for(int i=0; i<n; i++) {
      cin >> str;
      char y = (char)tolower(str[0]);
      char e = (char)tolower(str[1]);
      char s = (char)tolower(str[2]);
      if(y == 'y' && e == 'e' && s == 's')
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   
   return 0;
}