#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
   int n, temp;
   bool yes;
   cin >> n;
   
   REP:
   yes = 1;
   unordered_map<int, int> mp;
   n++;
   temp = n;
   for(int i=0; i<4; i++) {
      if(mp.find(temp%10) != mp.end()){
         yes = 0;
         break;
      }
      else
         mp[temp%10]++;
      temp /= 10;
   }
   if(yes)
      cout << n;
   else
      goto REP;
   
   return 0;
}