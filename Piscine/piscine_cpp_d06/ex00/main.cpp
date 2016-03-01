/*
** main.cpp /home/lina_a/Projects/piscine_cpp_d06
**
** Created by lina_a on 11/01/16.
**
*/

#include <iostream>
#include <fstream>

int     main(int ac, char **av)
{
  if (ac == 1)
    std::cerr << "my_cat: Usage : ./my_cat file [...]" << std::endl;
  for (int i = 1; i < ac; i++)
    {
      std::ifstream res(av[i], std::ios::in);
      if (!res)
	std::cerr << "my_vat: <" << av[i] << ">: No such file or directory" << std::endl;
      std::cout << res.rdbuf();
    }
  return 0;
}
