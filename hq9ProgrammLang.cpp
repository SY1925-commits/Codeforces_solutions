#include <iostream>
#include <string>
using namespace std;

int main() {
   int yes=0;
   string s;
   cin >> s;
   for(int i=0; i<(int)s.length(); i++)
      if((s[i] == 'H') || (s[i] == 'Q') || (s[i] == '9'))
         yes = 1;
   if(yes)
      cout << "YES";
   else
      cout << "NO";

   return 0;
}