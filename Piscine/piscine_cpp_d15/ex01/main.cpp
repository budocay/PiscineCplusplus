#include <iostream>
#include "ex01.hpp"

class toto {
private:
    toto &operator=(const toto &) { return *this; }
    toto(const toto &) { }

public:

    bool operator==(const toto &) const { return true; }

    bool operator>(const toto &) const { return false; }

    bool operator<(const toto &) const { return false; }

    toto() { }
};

int main()
{
    toto a, b;

    if (!compare(a, b))
        std::cout << "Compare a, b good :)" << std::endl;
    if (::compare(1, 2) == -1)
        std::cout << "Compare 1 and 2 good :)" << std::endl;
    if (compare<const char*>("chaineZ", "chaineA42") == 1)
        std::cout << "Compare \"chaineZ\" and \"chaineA42\" good :)" << std::endl;
    const char *s1 = "42", *s2 = "lulz";
    if (compare(s1, s2) == -1)
        std::cout << "Last test good :)" << std::endl;
    return 0;
}