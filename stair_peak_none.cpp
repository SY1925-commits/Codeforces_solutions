#include <iostream>
using namespace std;

int main() {
   int n, a[3];
   cin >> n;
   for(int i=0; i<n; i++) {
      for(int j=0; j<3; j++)
         cin >> a[j];
      if(a[0]<a[1] && a[1]<a[2])
         cout << "STAIR" << endl;
      else if(a[0]<a[1] && a[1]>a[2])
         cout << "PEAK" << endl;
      else
         cout << "NONE" << endl;
   }
   
   return 0;
}