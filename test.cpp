#include <iostream>
#include "mylib.hpp"

int main(int argc, char** argv) {
  int values[] = {4, 3, 11, 2};
  int expected[] = {11, 10, 18, 9};

  for(int i = 0; i < 4; i++) {
    int result = process(values[i]);
    if(result[i] != expected[i]) {
      std::cout << "Expected " << expected[i] << " but got " << result << std::endl;
      return 1;
    }
  }
  return 0;
}
