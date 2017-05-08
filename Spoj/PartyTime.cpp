//g++  5.4.0

#include <iostream>

int main()
{
    std::cout << "Hello, world!\n";
    int testCases;
    std::cin>>testCases;
    
    while(testCases--){
        int cases;
      
        std::cin>>cases;    
        int itemsA[cases+1];
        int itemsB[cases+1];
        int person[cases];
        int sum=0;
        for(int i=0;i<=cases;i++){
            std::cin>>itemsA[i];
            std::cin>>itemsB[i];
            
            if(i<cases){
               std::cin>>person[i];
            }
        }
        
        
        for(int i=0;i<=cases;i++){
            
            if(i < cases){
            int x = itemsA[i] ^ itemsA[i+1] * person[i];
            int y = itemsB[i] ^ itemsB[i+1] * person[i];
            
            if(x<y){
                sum+=x;
             }else{
               sum+=y;
              }
            }
            
        }
        
        std::cout<<sum;
        
    }
    
}