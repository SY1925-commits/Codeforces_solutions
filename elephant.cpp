#include <iostream>
using namespace std;

int main() 
{
   int loc, numSteps=0;
   cin >> loc;
   while(loc!=0)
   {
      if(loc>=5)
      {
         numSteps++;
         loc -= 5;
      }
      else if(loc=4)
      {
         numSteps++;
         loc -= 4;
      }
         else if(loc=3)
            {
               numSteps++;
               loc -= 3;
            }
               else if(loc=2)
                  {
                     numSteps++;
                     loc -= 2;
                  }
                  else
                  {
                     numSteps++;
                     loc -= 1;
                  }
   }
   cout << numSteps;
   return 0;
}