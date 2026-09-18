#include <iostream>
using namespace std;

int main() 
{
   int num, count;
   string r = "codeforces", s;
   cin >> num;
   for(int n=0; n<num; n++)
   {
      count=10;
      cin >> s;
      for(int i=0; i<10; i++)
      {
         if(s[i] == r[i])
            count--;
      }
      cout << count << endl;
   }
   return 0;
}