//clang 3.8.0

#include <iostream>
std::string isep(std::string s);

int main()
{
    std::string a,b;
    std::cin >> a >> b;  
    if (isep(a) == isep(b)) std::cout << "YES\n";
    else std::cout << "NO\n";
    
}

std::string isep(std::string s)
{
    if (s.size() % 2) return s;
    std::string a1 = isep(s.substr(0,s.size() / 2));
    std::string a2 = isep(s.substr(s.size() / 2,s.size()));
     if(a1 > a2) 
        return (a2 + a1);
    else 
        return (a1 + a2);
}