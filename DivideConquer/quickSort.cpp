//g++  5.4.0

#include <iostream>
using namespace std;

void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
      cout<<array[i]<<endl;  
    }
        
}
int quickSort(int low, int high, int array[]) {
     int i = low;
     int j = high;
     int pivot = array[low];
     i++;
     bool flag = true;
    while(flag) {
    while(array[i] <= pivot && i <= high) {
      i++;
    }
    while(array[j] >= pivot && j >= 0) {
      j--;
    }
      if(j < i) {
        flag = false;
      } else {
      int temp = array[i];
      array[i] = array[j];
      array[j] = temp;
     }
    }
    int temp = array[low];
    array[low] = array[j];
    array[j] = temp;
    return j;

}
void partition(int low, int high, int array[]) {
    if(low < high) {
       int j = quickSort(low, high, array);
       partition(low, j -1, array);
       partition(j+1, high, array);
    }
    
}
int main()
{
    int arr[] = {4, 8, 9, 7 , 6, 3, 5, 10 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = size;
    partition(i, j-1, arr);
    printArray(arr,size);
}