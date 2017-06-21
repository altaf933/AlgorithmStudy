//g++  5.4.0

#include <iostream>
#include<string.h>
int main()
{
    
    std::string input,result,input2,result2;
    std::cin>>input;
    
    //std::cout<<input;
    
    char *cstr = new char[input.length() + 1];
    strcpy(cstr,input.c_str());
    
    // do stuff
    //delete [] cstr;
    
    while(*cstr){
        
        if(tolower(*cstr)=='a'){
            
        }
        else if(tolower(*cstr)=='e'){
             
        }
        else if(tolower(*cstr)=='i'){
             
        }
        else if(tolower(*cstr)=='o'){
              
        }
        else if(tolower(*cstr)=='u'){
            
        }else if(tolower(*cstr)=='y'){
            
        }else{
           result+=*cstr;    
            
        }
        *cstr++;  
    }
        
    char *cNewStr = new char[result.length()+1];
    strcpy(cNewStr,result.c_str());
    
     
    
    while(*cNewStr){
        result2+='.';   
        if(isupper(*cNewStr)){
            result2+=tolower(*cNewStr);
        } else
          result2+=*cNewStr;
     
        cNewStr++;
    }
    
 std::cout<<result2;
    
}