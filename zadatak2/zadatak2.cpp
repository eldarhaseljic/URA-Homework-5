#include <iostream>
int banknotes [3] { 11 , 5 , 1 };

int numbanknotes(int change, int i)
{
  int num=0;
  while(change>0)
  {
    if(banknotes[i]>change) ++i;
    else
    {
      change = change - banknotes[i];
      ++num;
    }
  }
  return num;
}

int function(int change)
{
  int a = numbanknotes(change,0);
  int b = numbanknotes(change,1);
  int c = numbanknotes(change,2);
  return std::min(std::min(a,b),c);
}


int main(int argc, char *argv[])
{
  int change;
  std::cout <<  " Enter the change: ";
  std::cin >> change;
  int n=function(change);
  std::cout << "The change has " << n  << " banknotes! " << std::endl;
  return 0;
}
