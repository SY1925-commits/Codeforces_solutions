#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
   string s; 
   int upper = 0, lower = 0;
   cin >> s;
   for(int i=0; i<s.length(); i++)
      if(isupper(s[i]))
         upper++;
      else
         lower++;
   if(upper>lower)
      for(int i=0; i<s.length(); i++)
         s[i] = toupper(s[i]);
   else
      for(int i=0; i<s.length(); i++)
         s[i] = tolower(s[i]);
   cout << s;
   return 0;
}