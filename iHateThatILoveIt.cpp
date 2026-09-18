#include <iostream>
#include <string>
using namespace std;

int main() 
{
   int numLayers; 
   string h = "I hate it", l = "I love it", m = "that", final; final = h;
   cin >> numLayers;
   if(numLayers > 1)
   {
      for(int i=2; i<=numLayers; i++)
         if(i%2 == 0)
         {
            final = final.replace((final.length()-2), 2, m) + " " + l;
         }
         else
         {
            final = final.replace((final.length()-2), 2, m) + " " + h;
         }
   }
   cout << final;
   return 0;
}