#include <iostream>
#include <math.h>
#include <unordered_set>
using namespace std;

int main() {
   int num, n, temp, o=0, digits, digCpy, rev=0;
   cin >> num;
   unordered_set<int> c[10000];
   for(int j=0; j<num; j++) {
      temp=0; o=0; digits=0; digCpy; rev=0;
      cin>>n;
      temp=n;
      while(temp) {
         temp /= 10;
         digits++;
      }
      temp=n;
      while(temp) {
         rev = rev*10 + temp%10;
         temp /= 10;
      }
      temp = rev;
      digCpy = digits;
      for(int i=0; i<digits; i++) {
         if(!(temp%10)) {
            temp /= 10;
            digCpy--;
            continue;
         }
         c[j].insert((temp%10)*pow(10, digCpy-1));
         temp /= 10;
         digCpy--;
      }
      cout<<c[j].size() << endl;
      for(auto& item : c[j])
         cout<< item << " ";
      cout << endl;
   }
   
   return 0;
}