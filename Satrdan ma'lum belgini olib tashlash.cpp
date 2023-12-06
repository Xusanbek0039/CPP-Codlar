#include <iostream>
#include <cstring>
using namespace std;

int main() {
  
  char s[100] = "Ass#salo$mu a&layku@m";

  for(int i=0; i<strlen(s); i++) {
    if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && !(s[i]==' ')) {
      for(int j=i; j<strlen(s); j++) {
        s[j] = s[j+1];
      }
    }
  }

  cout << s;
  
  return 0;
}
