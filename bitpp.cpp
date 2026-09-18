#include <iostream>
#include <string>
using namespace std;

int main() {
   int n, x=0; string s;
   cin >> n;
   for(int i=0; i<n; i++)
   {
      cin >> s;
      if(s.find("++")<s.length())
      {
         x++;
      }
      if(s.find("--")<s.length())
      {
         x--;
      }
   }
   cout << x;
   return 0;
}