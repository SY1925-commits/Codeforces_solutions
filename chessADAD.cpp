//simple way
#include <iostream>
#include <string>
using namespace std;

int main() {
   int n, a=0, d=0;
   string s;
   cin >> n;
   cin >> s;
   for(int i=0; i<(int)s.length(); i++) {
      if(s[i] == 'A')
         a++;
      else
         d++;
   }
   if(a>d)
      cout << "Anton";
   else if(a<d)
      cout << "Danik";
   else
      cout << "Friendship";
   
   return 0;
}

/*
//using map to keep count

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
   int n;
   string s;
   cin >> n;
   cin >> s;
   unordered_map<char, int> count = {{'A', 0}, {'D', 0}};
   for(int i=0; i<(int)s.length(); i++)
      count[s[i]]++;
   if(count['A']>count['D'])
      cout << "Anton";
   else if(count['A']<count['D'])
      cout << "Danik";
   else
      cout << "Friendship";
   
   return 0;
}
*/