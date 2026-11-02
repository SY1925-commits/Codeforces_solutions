#include <iostream>
using namespace std;

int main() {
   long long n, temp;
   int comp, count=0;
   cin >> n;
   temp = n;
   while(temp!=0) {
      comp = temp%10;
      if(comp == 4 || comp == 7)
         count++;
      temp/=10;
   }
   if(count == 4 || count == 7)
      cout << "YES";
   else
      cout << "NO";

   return 0;
}