#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
  for(int i = 0; i < n/2; i++) {
    int temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = temp;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5}; 
  
  reverseArray(arr, 5);
  
  for(int x : arr) 
   cout << x << " ";
   
  return 0;   
}
