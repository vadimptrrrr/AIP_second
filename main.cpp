#include <cstddef>
#include <iostream>



int ** create(size_t rows, size_t cols)
{
  int ** mtx = new int * [rows];
  size_t created = 0;
  try
  {
    for (; created < rows; ++created)
    {
      mtx[created] = new int[cols];
    }  
  }
  catch(const std::bad_alloc & e)
  {
    std::cerr << e.what() << '\n';
  }
  
  return mtx;
}

int main()
{
  
}