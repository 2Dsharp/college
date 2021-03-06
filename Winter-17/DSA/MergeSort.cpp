#include <iostream>

int * merge(int arr[], int size, int leftStart, int rightEnd) {

  int leftEnd = (leftStart + rightEnd) / 2;
  int rightStart = leftEnd + 1;
  int temp[size];
  
  int leftIndex = leftStart;
  int rightIndex = rightStart;
  int index = leftStart;

  while (leftIndex <= leftEnd && rightIndex <= rightEnd) {

    if (arr[leftIndex] < arr[rightIndex]) {
      temp[index] = arr[leftIndex];
      leftIndex++;
    } else {
      temp[index] = arr[rightIndex];
      rightIndex++;
    }
    index++; 
  }

  while (leftIndex <= leftEnd) {
    temp[index] = arr[leftIndex];
    leftIndex++;
    index++;
  }
  while (rightIndex <= rightEnd) {
    temp[index] = arr[rightIndex];
    rightIndex++;
    index++;
  }

  return temp;
}
int * mergeSort(int arr[], int size, int leftStart, int rightEnd) {

  if (leftStart >= rightEnd) {

    //return 0;
  }

  int middle = (leftStart + rightEnd)/2;
  mergeSort(arr, size, leftStart, middle);
  mergeSort(arr, size, middle+1, rightEnd);
  merge(arr, leftStart, size, rightEnd);
}
int main() {

  int arr[] = {5, 2, 7, 0, 9, 6, 3, 1, 8};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  int * sorted = mergeSort(arr, size, 0, size);
  std::cout << sorted[1];
}
