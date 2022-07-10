#include <iostream>

template <class T>
inline T Cube(T number)
{
    return number * number * number;
}

int main()
{
    std::cout << ">>> Cube(5)\n";
    std::cout << Cube(5) << "\n";
}