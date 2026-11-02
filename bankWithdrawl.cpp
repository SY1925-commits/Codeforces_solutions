#include <iostream>
using namespace std;

int main() {
   long long n;
   int bills=0;
   cin >> n;
   while(n) {
      if(n>=100) {
         bills += n/100;
         n -= 100*(n/100);
      }
      else if(n>=20) {
         bills += n/20;
         n -= 20*(n/20);
      }
      else if(n>=10) {
         bills += n/10;
         n -= 10*(n/10);
      }
      else if(n>=5) {
         bills += n/5;
         n -= 5*(n/5);
      }
      else {
         bills++;
         n--;
      }
   }
   cout << bills;
   
   return 0;
}