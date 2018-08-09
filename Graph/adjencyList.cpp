//g++  5.4.0

#include <iostream>
#include <vector>
using namespace std;

void addDirection(int v, int u, vector<int> graph[]){
    graph[v].push_back(u);
    graph[u].push_back(v);
}

int main()
{
 
    vector<int> g[5];
    addDirection(0,1, g);
    addDirection(0,4, g);
    addDirection(1,2, g);
    addDirection(1,3, g);
    addDirection(1,4, g);
    addDirection(2,3, g);
    addDirection(3,4, g);
    
    for(int i =0; i < 4; i++){
        cout<<i;
        for(auto x: g[i]) {
         cout<<"->"<<x;
        }
        cout<<endl;
    }
   
}