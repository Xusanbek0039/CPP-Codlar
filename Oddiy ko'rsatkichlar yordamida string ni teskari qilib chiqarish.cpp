#include <iostream>
using namespace std;

int main() {
  string s = "Hello"; 
  
  char *c = &s[0];
  int n = s.size();

  for(int i = n-1; i >= 0; i--) {
    cout << *(c+i); 
  }
  
  return 0;
}
