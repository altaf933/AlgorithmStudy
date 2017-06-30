//clang 3.8.0

#include <iostream>
int minMax(int low,int high,int arr[]);
  int main()
    {
  
     int arr[] = { 2, -4, 1, 9, -2, 7, -3 };
     int n = sizeof(arr) / sizeof(arr[0]);
      
      std::cout<<minMax(0,n-1,arr);
 }

int minMax(int low,int high,int arr[]){

    if(low == high){
       return arr[low]; 
    }
    
    int mid = (low+high)/2;
    int value1 = minMax(low,mid,arr);
    int value2 = minMax(mid+1,high,arr);
    
    if(value1<value2){
        return value1;
    }else{
        return value2;
    }
    
    
}