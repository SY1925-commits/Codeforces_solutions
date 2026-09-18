#include <iostream>
#include <string>
using namespace std;

int main() 
{
   string s; int l;
   cin >> s;
   l = s.length();
   cout << char(toupper(s[0]));
   for(int i=1; i<l; i++)
      cout << s[i];
   return 0;
}