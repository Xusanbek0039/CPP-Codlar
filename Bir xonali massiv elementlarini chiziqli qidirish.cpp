#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
  for(int i = 0; i < n; i++) {
    if(arr[i] == x)
      return i; 
  }
  return -1; 
}
int main() {  
  int arr[] = {10, 15, 25, 30, 40}; 
  int x = 25;
  int index = linearSearch(arr, 5, x); 
  if(index != -1) {
    cout << "Element " << x << " topsandi. Index: " << index;
  } else {
    cout << "Topilmadi";
  }
  return 0;
}
