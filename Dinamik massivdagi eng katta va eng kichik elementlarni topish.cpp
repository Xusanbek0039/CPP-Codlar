#include <iostream>
#include <climits>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  int *arr = new int[n];
  
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }

  int maxNum = INT_MIN;
  int minNum = INT_MAX;

  for(int i = 0; i < n; i++) {
    if(arr[i] > maxNum) {
      maxNum = arr[i];
    }
    if(arr[i] < minNum) {
      minNum = arr[i]; 
    }
  }

  cout << "Minimum: " << minNum << endl;
  cout << "Maximum: " << maxNum;

  delete[] arr;
  
  return 0; 
}
