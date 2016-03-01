/*
** ex_06.c for ex06 in /home/lina_a/rendu/B3/Piscine/cpp_SKL/ex_06
**
** Made by lina_a
** Login   <lina_a@epitech.net>
**
** Started on  Sat Jan  9 23:18:53 2016 lina_a
** Last update Sat Jan  9 23:18:53 2016 lina_a
*/

#include "raise.h"
#include "new.h"
#include "container.h"
#include "iterator.h"
#include "object.h"
#include "float.h"
#include "int.h"
#include "char.h"
#include "list.h"

int         main()
{
    Object   *get;
    Object   *get2;
    Object   *res;
    Object    *myList = new(List, Float, 34.5);
    Object    *myList2 = new(List, Float, 3.14);
    Object    *iter;

    ((ClassList *)myList)->push_back(myList, 3.14);
    ((ClassList *)myList)->push_back(myList, 42.67);
    ((ClassList *)myList)->push_back(myList, 234345454.3);

    if ((iter = end(myList)) == NULL)
    {
        raise("Echec de la récupération de l'itérateur");
        return (-1);
    }

    printf("%s\n", str(iter));
    setval(iter, -56.78);
    get = getitem(myList, 3.14);
    get2 = getitem(myList2, 0.5);
    delete(get);
    get = getval(iter);
    delete(get);
    get = ((ClassList *)myList)->pop_front(myList);
     /*incr(iter)*/
    delete(get2);
    get2 = getval(iter);
    printf("Les valeurs récupérées par l'itérateur sont : %s et %s\n", str(get), str(get2));
    delete(get);
    delete(get2);

    /*
     * FLoat add
     */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    printf("Les valeurs récupérées sont : %s et %s\n", str(get), str(get2));
    res = Float->__add__(get, get2);
    printf("Test Addition Float\n");
    printf("On addition %s + %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);


    /*
     * Test FLoat sub
     */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Float->__add__(get, get2);
    printf("Test soustraction Float\n");
    printf("On soustrait %s - %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);


/*
 * Test Float mult
 */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Float->__mul__(get, get);
    printf("Test multiplication Float\n");
    printf("On multiplie %s * %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);

    /*
     * Test FLoat division
     */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Float->__div__(get, get);
    printf("Test division Float\n");
    printf("On divise %s / %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);
    delete(myList);
    delete(myList2);
    /*
     * Test type Int
     */

    /*
     * Int add
     */
    myList = new (List, Int, 3.14);
    myList2 = new (List, Int, 42.0);
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Int->__add__(get, get2);
    printf("Test Addition Int\n");
    printf("On addition %s + %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);


    /*
     * Test Int sub
     */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Int->__add__(get, get2);
    printf("Test soustraction Int\n");
    printf("On soustrait %s - %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);

/*
 * Test Int mult
 */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Int->__mul__(get, get);
    printf("Test multiplication Int\n");
    printf("On multiplie %s * %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);

    /*
     * Test Int division
     */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Int->__div__(get, get);
    printf("Test division Int\n");
    printf("On divise %s / %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);
    delete(myList);
    delete (myList2);

    /*
     * Test Type Char
     */

    /*
     * Char add
     */
    myList = new (List, Char, 3.14);
    myList2 = new (List, Char, 56.7);
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Char->__add__(get, get2);
    printf("Test Addition Char\n");
    printf("On addition %s + %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);

    /*
     * Test Char sub
     */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Char->__add__(get, get2);
    printf("Test soustraction Char\n");
    printf("On soustrait %s - %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);


/*
 * Test Char mult
 */
    get = getitem(myList, NULL);
    get2 = getitem(myList2, 0);
    res = Char->__mul__(get, get);
    printf("Test multiplication Char\n");
    printf("On multiplie %s * %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);


    /*
     * Test Char division
     */
    get = getitem(myList, 0);
    get2 = getitem(myList2, 0);
    res = Char->__div__(get, get);
    printf("Test division Char\n");
    printf("On divise %s / %s = %s\n", str(get), str(get2), (str(res)));
    delete(res);
    delete(get);
    delete(get2);
    delete(myList);
    delete(myList2);
    delete(iter);
    return (0);
}
