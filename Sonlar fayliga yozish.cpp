#include <iostream>
#include <fstream>
using namespace std;

int main () {

  ofstream myfile;
  myfile.open ("numbers.txt");
  
  myfile << "1 2 3 4 5\n";
  myfile << "6 7 8 9 10";

  myfile.close();

  return 0;
}
