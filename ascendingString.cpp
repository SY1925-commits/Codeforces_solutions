#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
   vector<int> a;
   string s;
   cin >> s;
   for(int i=0; i<(int)s.length(); i+=2)
      a.push_back((int)(s[i]-'0'));
   sort(a.begin(), a.end());
   s = "";
   for(int i=0; i<(int)a.size(); i++) {
      s = s + to_string(a[i]) + "+";
   }
   s.pop_back();
   cout << s;
   
   return 0;
}