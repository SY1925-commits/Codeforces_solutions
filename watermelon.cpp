#include <iostream>
using namespace std;
 
int main() {
   int n;
   cin >> n;
   if(n>2) {
      if(n%2)
         cout << "NO" << endl;
      else
         cout << "YES" << endl;
   }
   else
      cout << "NO" << endl; //could this be done another way?
    return 0;
}