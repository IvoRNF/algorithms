
#include <iostream>
using namespace std;
#include "../common/printer.hpp"
#include "./search.h"
#include "./sorter.h"
#include <cassert>
// O(n**2)
int *twoSum(int *inputData, int target, int size) {
  int *result = new int[2]{0, 0};
  for (int i = 0; i < size; i++) {
    int diff = target - inputData[i];
    for (int j = 0; j < size; j++) {
      int value = inputData[j];
      if (value == diff) {
        result[0] = i;
        result[1] = j;
        return result;
      }
    }
  }
  return result;
}

// O(log n * n)
int *twoSum2(int *inputData, int target, int size) {
  int *result = new int[2]{0, 0};
  for (int i = 0; i < size; i++) {
    int diff = target - inputData[i];
    int j = b_search(inputData, diff, size);
    if (j != -1) {
      result[0] = i;
      result[1] = j;
      return result;
    }
  }
  return result;
}

void test() {
  int size = 7;
  int *values = new int[size]{1, 0, 10, 12, 13, 14, 8};
  // brute_sort(values, size);
  cout << "quick sorting....." << endl;
  quick_sort(values,0,size - 1);
  cout << "quick sort maded!! " << endl;
  printList(values, size);
  // int target = 25;
  // auto result = twoSum2(values, target, size);
  // printList(result, 2);
  // assert(((values[result[0]] + values[result[1]]) == target));
  // delete[] result;
  delete[] values;
}
