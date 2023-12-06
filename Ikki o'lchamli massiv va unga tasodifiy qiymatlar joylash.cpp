#include <iostream>
using namespace std;

int main() {

  int rows = 3, cols = 3;
  int A[rows][cols];

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      A[i][j] = rand() % 100; 
    }
  }

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }

  return 0;  
}

