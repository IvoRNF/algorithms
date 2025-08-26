#include <iostream>
using namespace std;

void printList(int *list, int size) {
  for (int i = 0; i < size; i++) {
    cout << list[i] <<"";    
    if(i != size-1){
      cout << " ,";
    }
  }
  cout << endl;
}
