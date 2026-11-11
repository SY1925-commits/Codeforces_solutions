#include <iostream>
using namespace std;

int main() {
   int n, ent[100000], numDiv=0;
   cin >> n;
   for(int i=0; i<n; i++)
      cin >> ent[i];
      
   for(int i=0; i<n; i++)
      if(ent[i] != ent[i+1])
         numDiv++;
   cout << numDiv;
   
   return 0;
}