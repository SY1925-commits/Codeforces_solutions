#include <iostream>
using namespace std;

int main() {
   int k, n, w, reqd, borr;
   cin >> k >> n >> w;
   reqd = ((w*(w+1))/2)*k;
   borr = reqd - n;
   if(borr<=0)
      cout << 0;
   else
      cout << borr;
   
   return 0;
}