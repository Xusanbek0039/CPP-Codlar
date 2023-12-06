#include <iostream>
using namespace std;

int factorial(int n) {
  if(n == 0) 
    return 1;  
  return n * factorial(n-1);
}

int main() {

  int n = 5;
  
  int result = factorial(n);
  
  cout << n << "! = " << result;

  return 0;
}
