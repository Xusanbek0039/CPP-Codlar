#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  
  string line;
  ifstream myfile ("text.txt");
  
  if (myfile.is_open()) {  
    while ( getline (myfile,line) ) {
      cout << line << '\n';
    }
    myfile.close();
  }

  return 0;  
}
