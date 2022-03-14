#include <iostream>
using namespace std;

int main() {
  int l, d, k, p, s;
  
  cin >> l >> d;
  cin >> k >> p;
  
  cout << ((l/d)*p) + (k*l);
  
  return 0;
}