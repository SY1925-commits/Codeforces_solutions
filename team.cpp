#include <iostream>
using namespace std;

int main() {
   int numTotal, numSolved=0, numPplKnow; int knowSolution;
   cin >> numTotal;
   for(int i=0; i < numTotal; i++)
   {
      numPplKnow=0;
      for(int j=0; j < 3; j++)
      {
         cin >> knowSolution;
         if(knowSolution)    
            numPplKnow++;
      }
      if(numPplKnow>1)
         numSolved++;
   }
   cout << numSolved;
   return 0;
}