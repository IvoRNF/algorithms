
#include <iostream>
using namespace std;




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

void test(){
  int* values = new int[7]{1,0,10,12,13,14,8};
  int target = 11;
  cout << "testing..." << endl;


  auto result = twoSum(values,11,7); 
  cout << result[0] <<"  "<< result[1] << endl;
  cout << "check " << ((values[result[0]] + values[result[1]]) == target) << endl;
  delete result;
  delete values;
}


