
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
