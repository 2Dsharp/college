#include <iostream>


int * buildArray() {


  return arr;
}

int main() {

  int limit;
  std::cout << "Enter the number of numbers: ";
  std::cin >> limit;
  int arr[limit];
  std::cout << "Enter " << limit << "  numbers separated by newlines: ";

  int i = 0;
  while (i < limit) {

    std::cout << std::endl << limit - i << " more numbers: ";
    std::cin >> arr[i];
    i++;
  }


  return 0;
  
}
