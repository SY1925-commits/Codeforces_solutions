#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
   int n, nOx, nOy, x[100], y[100], nm;
   cin >> n;
   cin >> nOx;
   for(int i=0; i<nOx; i++)
      cin >> x[i];
   cin >> nOy;
   for(int i=0; i<nOy; i++)
      cin >> y[i];
   unordered_set<int> num;
   for(int i=0; i<nOx; i++)
      num.insert(x[i]);
   for(int i=0; i<nOy; i++)
      num.insert(y[i]);
   /* for(auto i : num)
       nm++; */
   nm = (int)num.size();
   if(nm<n)
      cout << "Oh, my keyboard!";
   else if(nm==n)
      cout << "I become the guy.";
   
   return 0;
}