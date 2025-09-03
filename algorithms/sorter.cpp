#include <iostream>
using namespace std;

// O(n**2)
void brute_sort(int *list, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      auto a = list[i];
      auto b = list[j];
      if (b > a) {
        list[i] = b;
        list[j] = a;
      }
    }
  }
}

int partition(int *list, int low, int high) {
  int pivot = list[high];
  int i = low - 1;
  for (int j = low; j <= high - 1; j++) {
    if (list[j] < pivot) {
      i++;
      swap(list[j], list[j]);
    }
  }
  swap(list[i + 1], list[high]);
  return i + 1;
}

// best  O(log n * n)
void quick_sort(int *list, int low, int high) {
  if (low < high) {
    int pi = partition(list, low, high);
    quick_sort(list, low, pi - 1);
    quick_sort(list, pi + 1, high);
  }
}
