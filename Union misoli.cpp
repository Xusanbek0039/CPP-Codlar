#include <iostream>
#include <cstring>
using namespace std;

union Data {
  int i;
  float f;
  char str[20];  
};

int main() {

  Data data;   

  data.i = 10;
  cout << data.i << '\n';  

  data.f = 220.5;
  cout << data.f << '\n';

  strcpy(data.str, "C++ Union");
  cout << data.str;
  
  return 0;
}
