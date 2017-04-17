#include <iostream>

#define N 4
 

bool mazeUtil(int maze[N][N],int x, int y, int sol[N][N]);
void mazeItem(int maze[N][N]);

int main() {
     int maze[N][N]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    mazeItem(maze);
    
    //mazeItem
  return 0;
}

void mazeItem(int maze[N][N]){
    
    int sol[N][N]  =  { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
    mazeUtil(maze,0,0,sol);
    
    for(int i=0; i< N;i++){
        for(int j=0;j<N;j++){
            std::cout << sol[i][j];
        }
        std::cout<<std::endl;
    }
    
}

bool isSafe(int x,int y, int maze[N][N]){
    
    if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1){
        return true;
    }
    return false;
}
    bool mazeUtil(int maze[N][N],int x, int y,int sol[N][N]){
         // if (x,y is goal) return true
        if(x == N-1 && y == N-1)
            {
                sol[x][y] = 1;
                return true;
            }
        
       if(isSafe(x,y,maze)){
          sol[x][y] = 1;
         if(mazeUtil(maze,x+1,y,sol)==true){
            return true;
          }
         if(mazeUtil(maze,x,y+1,sol)==true){
            return true;
           }
          sol[x][y]=0;
      }
      return false;
  }