#include <iostream>
using namespace std;

int main() {
   int n, o;
   cin >> n;
   for(int i=0; i<n; i++) {
      cin >> o;
      if(o==1) {
         cout<<"HARD";
         exit(0);
      }
   }
   cout<<"EASY";
   
   return 0;
}