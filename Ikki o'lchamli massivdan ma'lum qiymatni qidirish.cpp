#include <iostream>
using namespace std;

bool search(int A[3][4], int key) {
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      if(A[i][j] == key)
        return true; 
    }
  }
  return false;
}

int main() {
  
  int A[3][4] = {{1, 2, 5, 7}, 
                 {9, 6, 3, 8},
                 {4, 10, 13, 20}};
                 
  int key = 8;
                 
  if(search(A, key)) 
    cout << "Key topildi";
  else
    cout << "Topilmadi";

  return 0;  
}
