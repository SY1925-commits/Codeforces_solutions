#include <iostream>
using namespace std;

long long sequence(long long n) {
   if(n%2)
      return -((n/2) + 1);
   else
    return n/2;
}

int main() {
   long long n;
   cin >> n;
   cout << sequence(n);
   
   return 0;
}

/*
Tried the following recursive function:

#include <iostream>
#include <math.h>
using namespace std;

class Solution {
   public:
      int sequence(int);
};
int Solution :: sequence(int n) {
   if(n==1)
      return -1;
   return (pow(-1, n)*n) + sequence(n-1);
}

int main() {
   Solution a;
   int n;
   cin >> n;
   cout << a.sequence(n);
   
   return 0;
}

but failed on case: 1000000000
with error - Runtime error: exit code is -1073741571 (STATUS_STACK_OVERFLOW)
[because a billion recursive calls were not viable]
*/