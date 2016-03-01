#include <iostream>
#include <vector>
#include "find.hpp"



int main() {

  int n1 = 3;

  int n2 = 5;



  std::vector<int> v(5);

  v[0] = 0;

  v[1] = 1;

  v[2] = 2;

  v[3] = 3;

  v[4] = 4;



  std::vector<int>::iterator found = do_find(v, n1);

  std::vector<int>::iterator not_found = do_find(v, n2);



  if (found != v.end())

    {

      std::cout << "yes =) and value is : " << *found << std::endl;

    }

  else

    std::cout << "fail :(" << std::endl;



  if (not_found == v.end())

    std::cout << "yes =)" << std::endl;

  else

    std::cout << "fail :(" << std::endl;



  return 0;

}
