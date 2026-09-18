#include <iostream>
#include <string>
using namespace std;
 
int main() {
   int n; string s;
   cin >> n;
   for(int i=0; i < n; i++)
   {
      cin >> s;
      int m = s.length();
      if(m > 10)
         s.replace(1, (m-2), to_string(m-2));
      cout << s << endl;
   }
   return 0;
}