//clang 3.8.0

#include <iostream>
#include <string>

int main()
{
    
   // std::cout << "Hello, world!\n";
    //std::string op1 = "++";
    //std::string op2 = "--";
    
    std::string op1 ("++");
    std::string op2 ("--");
    int input;
    std::string data;
    int X=0;
    
    std::cin>>input;
    
    for(int i=0;i<input;i++) {
        
        std::cin>>data;
        //std::cout<<data<<std::endl;
        if(data.find(op2)!= std::string::npos){
                       X--;
        }
        else if(data.find(op1)!= std::string::npos){
             
            X++;
        }
    }
    
    
    std::cout<<X;
}

http://git.sa-labs.info/backgammon/backgammon-electron/blob/master/setup.iss