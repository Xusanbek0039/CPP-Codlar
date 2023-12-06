#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
  for(int i = 0; i < n/2; i++) {
     int temp = arr[i];
     arr[i] = arr[n-1-i];  
     arr[n-1-i] = temp;
  }
}

void printArray(int arr[], int size) {
  for(int i = 0; i < size; i++)
    cout << arr[i] << " ";  
  cout << endl;  
}

int main() {
  int arr[] = {1, 5, 7, 9, 11}; 
  
  reverse(arr, 5);
  
  printArray(arr, 5);

  return 0;
}
