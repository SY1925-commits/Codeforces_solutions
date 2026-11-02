#include <iostream>
using namespace std;

int main() {
   int numCases, a[3], sumCheck;
   cin >> numCases;
   for(int i=0; i<numCases; i++) {
      sumCheck = 0;
      for(int j=0; j<3; j++)
         cin >> a[j];
      if(a[0]>a[1]) {
         if(a[0]>a[2]) {
            if(a[0] == a[1]+a[2])
               sumCheck = 1;
         }
         else {
            if(a[2] == a[0]+a[1])
               sumCheck = 1;
         }
      }
      else {
         if(a[1]>a[2]) {
            if(a[1] == a[0]+a[2])
               sumCheck = 1;
         }
         else {
            if(a[2] == a[0]+a[1])
               sumCheck = 1;
         }
      }
      if(sumCheck == 1)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
   }
   
   
   return 0;
}