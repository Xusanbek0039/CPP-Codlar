#include <iostream> 
#include <cstring>
using namespace std;


int main() {
  char s[100] = "Bugun haftaning chorshanba kuni";


  int words = 0;


  for(int i = 0; i < strlen(s); i++){
    if(s[i] == ' ' && s[i+1] != ' ') {
      words++; 
    }
  }


  cout << "So'zlar soni: " << words+1;


  return 0;
}
