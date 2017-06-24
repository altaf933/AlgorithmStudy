//clang 3.8.0

#include <iostream>

int main()
{
    int input;
    std::cin>>input;
    int twoD[input][3];
    int col=0;
    for(int i=0;i<input;i++){
        std::cin>>twoD[i][col]>>twoD[i][col++]>>twoD[i][col++];
        col=0;
    }
    
    int count=0;
    
    for(int i=0;i<input;i++){
        
        for(int j=0;j<3;j++){
        
            if(twoD[i][j]==1 && twoD[i][j-1]==1){
                count++;
            }  
        }
    }
    std::cout<<count;
}