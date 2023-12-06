#include <iostream>
using namespace std;

int gcd(int a, int b) {
  int result = min(a, b);

  while(result > 0) {
    if(a%result == 0 && b%result == 0) {
      return result;
    }
    result--;  
  }

  return 1;
}

int main() {

  int x = 12, y = 8;
  
  cout << "EUK: " << gcd(x, y);
  
  return 0;
}
