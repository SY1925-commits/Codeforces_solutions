#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   vector<int> cal;
   string s;
   int res=0;
   for(int i=0; i<4; i++) {
      int x;
      cin >> x;
      cal.push_back(x);
   }
   cin >> s;
   for(int i=0; i<(int)s.length(); i++) {
      int x = s[i] - '0';
      if(x == 1)
         res += cal[0];
      else if(x == 2)
         res += cal[1];
      else if(x == 3)
         res += cal[2];
      else if(x == 4)
         res += cal[3];
   }
   cout << res;
   
   return 0;
}