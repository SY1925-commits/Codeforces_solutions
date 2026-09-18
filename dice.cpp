#include <iostream>
#include <string>
using namespace std;

int main() 
{
   int y, w, d, a, b, numer=0;
   float prob;
   cin >> y >> w;
   if(y > w)   a = y;
   else  a = w;
   for(int i=a; i<=6; i++)
      numer++;
   switch(numer)
   {
      case 0: 
         cout << "0/1"; break;
      case 1:
         cout << "1/6"; break;
      case 2:
         cout << "1/3"; break;
      case 3:
         cout << "1/2"; break;
      case 4:
         cout << "2/3"; break;
      case 5:
         cout << "5/6"; break;
      case 6:
         cout << "1/1"; break;
   }
   return 0;
}