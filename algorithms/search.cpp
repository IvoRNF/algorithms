#include <iostream>
using namespace std; 

////ok
int b_search(int *values, int target, int size) {
  int left = 1;
  int right = size - 1;
  while (left < right) {
    int mid = (left + right) / 2;
    int mid_value = values[mid];
    if (mid_value < target) {
      left = mid + 1;
    } else {
      right = mid;
    }
    // cout << "left " << left << " right " << right << " mid " << mid << endl;
  }
  return (left == right && target == values[left]) ? left : -1;
}
