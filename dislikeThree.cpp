#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n, k;
   cin >> n;
   for(int i=0; i<n; i++) {
      vector<int> seq;
      cin >> k;
      int j = 1;
      for(int l=0; l<k; l++) {
         while((j%3 == 0) || (j%10 == 3))
               j++;
         seq.push_back(j);
         j++;
      }
      cout << seq[k-1] << endl;
   }
   
   return 0;
}