nt main()
{
 
     int top=-1,testCase;
     char stack[MAX];
     std::string cases;
 
    std::cin>>testCase;
    while(testCase--){
 
        std::cin>>cases;
 
 
         for(int i=0;i<cases.length();i++ )
        {
           if(cases[i]==')')
            {
               while(stack[top]!='(')
                {
                       std::cout<<stack[top];
                    top-=1;
                }
                top-=1;
            }
            else
            {
                if(cases[i] >= 'a' && cases[i]<='z')
                     std::cout<<cases[i];
                else
                {
                top+=1;
                   stack[top]=cases[i];
                }
            }
            }
            std::cout<<std::endl;
    }
 
     return 0;
 
}