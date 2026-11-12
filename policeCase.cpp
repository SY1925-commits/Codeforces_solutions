#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n, nUnCs=0, nPO=0;
   cin >> n;
   vector<int> numEv;
   for(int i=0; i<n; i++) {
      int x;
      cin >> x;
      numEv.push_back(x);
   }
   for(int i=0; i<n; i++) {
      if(numEv[i] == -1) {
         nUnCs++;
         if(nPO > 0) {
            nPO--;
            nUnCs--;
         }
      }
      if(numEv[i] > 0)
         nPO += numEv[i];
   }
   cout << nUnCs;
   
   return 0;
}