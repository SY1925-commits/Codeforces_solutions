#include <iostream>
using namespace std;

int main() 
{
   int a, b, numYears=0;
   cin >> a >> b;
   do
   {
      a *= 3; b *= 2;
      numYears++;
   } while(a<=b);
   cout << numYears;
   return 0;
}