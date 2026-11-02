#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
   string s;
   cin >> s;
   unordered_map<char, int> count;
   for(int i=0; i<(int)s.length(); i++)
      count[s[i]]++;
   
   if(count.size()%2 != 0)
      cout << "IGNORE HIM!";
   else
      cout << "CHAT WITH HER!";
   
   return 0;
}