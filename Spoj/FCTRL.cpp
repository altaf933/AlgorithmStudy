//clang 3.8.0

#include <iostream>
#include<math.h>

int factorial(int n,int count);
int main()
{
    int testCases;
    int n;
    std::cin>>testCases;
    while(testCases--){
        
         std::cin>>n;
		 int result= factorial(n,5);
          std::cout<<result<<std::endl;    
       
    }
 
    
    
    
}

int factorial(int n,int div){

    if(div > n){
        return 0;
    }
        
    return (n/div)+factorial(n,5*div);
}