#include <iostream>
#include <stdexcept>

int MAX;
void aprint(int * niz)
{
  for(auto i=MAX-1;i>=0;--i)
  {
    std::cout << niz[i] << "\t";
  }
  std::cout  << std::endl;
}

void bprint(int * niz)
{
  if(niz[0]==1 && niz[MAX-1]==1)
    {
      for(auto i=MAX-1;i>=0;--i)
      {
        std::cout << niz[i] << "\t";
      }
      std::cout  << std::endl;
    }
}

void initialize(int * niz, int size)
{
  for(auto i=0;i<size;++i)
  {
    niz[i]=0;
  }
}

void abinary(int * niz , int size)
{
  if(size<1)
  {
    aprint(niz);
    return;
  }
  else
  {
    niz[size-1] = 0;
    abinary(niz,size-1);
    niz[size-1] = 1;
    abinary(niz,size-1);
  }  
}

void bbinary(int * niz , int size)
{
  if(size<1)
  {
    bprint(niz);
    return;
  }
  else
  {
    niz[size-1] = 0;
    bbinary(niz,size-1);
    niz[size-1] = 1;
    bbinary(niz,size-1);
  }  
}

void bfunction(int * niz , int size)
{
 initialize(niz,size);
 bbinary(niz,size);
}
  

void afunction(int * niz, int size)
{
 initialize(niz,size);
 abinary(niz,size);
}

int main(int argc, char *argv[])
{ 
  std::cout << "Enter a number : ";
  int num;
  std::cin >> num;
  int niz [num];
  MAX=num;
  std::cout << " All combinations of binary nubers which have " << num;
  std::cout << " elements : " << std::endl;
  afunction(niz,num);
  std::cout << " All combinations of binary nubers which have " << num;
  std::cout << " elements." << std::endl;
  std::cout << " This elements have 1 at the beginning and 1 at the end :"<< std::endl;
  bfunction(niz,num);
  return 0;
}
