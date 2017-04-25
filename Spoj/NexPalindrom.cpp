//clang 3.8.0

#include <iostream>
bool isPalindrom(int num);

int main()
{
    
    
    int testCases;
    int casese;
    std::cin>>testCases;
    
    while(testCases--){
        
        std::cin>>casese;
        casese+=1;
       // std::cout<<casese;
        while(!isPalindrom(casese)){
            casese++;
        }
    std::cout<<casese<<std::endl;    
    }
    
        
}

bool isPalindrom(int n){
    
    int i = n;
    int rev=0;
    
    while(n>0){
        
        int dig = n%10;
        rev = rev*10 + dig;
        n/=10;
    }
    
    if(i==rev){
        return true;
    }else{
        return false;
    }
}