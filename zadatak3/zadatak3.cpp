#include <iostream>
#include <stdexcept>
#define size 4
int solution[size][size];

void initialize(int solution[size][size])
{
  for(auto i=0;i<size;++i)
  {
    for(auto j=0;j<size;++j)
    {
      solution[i][j]=0;
    }
  }
}

void print(int solution[size][size])
{
  for(auto i=0;i<size;++i)
  {
    for(auto j=0;j<size;++j)
    { 
      std::cout << solution[i][j]<<"\t"; 
    }
    std::cout << std::endl;
  }
}

bool safe(int labyrinth [size][size], int row, int column)
{
  if(labyrinth[row][column]==0) return false;
    return true;
}
void solve(int labyrinth[size][size] , int row , int column ,int solution [size][size])
{
  if( row==size && column==size ) return;
  if( safe(labyrinth,row,column) )
  {
    solution[row][column]=1;
    if(safe(labyrinth,row,column+1))
    {
      solve(labyrinth,row,column+1,solution);
    }
    else if(safe(labyrinth,row+1,column))
    {
      solve(labyrinth,row+1,column,solution);
    }
  }
}

bool review(int solution[size][size] , int row, int column)
{
  if(solution[row][column]==1) return true;
  else return false;
}

void function(int labyrinth[size][size])
{
  initialize(solution);
  solve(labyrinth,0,0,solution);
  if(review(solution,size,size))  print(solution);
  else throw std::overflow_error("The labyrinth has no exit! Error!");
}

int main(int argc, char *argv[])
{
  int labyrinth [size][size]= { {1,0,0,0} , {1,1,0,1} , {0,1,1,0,} , {1,1,1,1} };
  std::cout << " The labyrinth is " << std::endl;
  for(auto i=0;i<size;++i)
  {
    for(auto j=0;j<size;++j)
    {
      std::cout << labyrinth[i][j] << "\t";
    }
    std::cout  << std::endl;
  }
  std::cout << std::endl; 
  std::cout << " The solution of the labyrinth is: " << std::endl;
  function(labyrinth);
  return 0;
}
