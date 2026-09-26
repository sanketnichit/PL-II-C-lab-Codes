#include <iostream>
using namespace std;

inline int sq(int a)
{
    return a * a;
}


inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    cout << "Square of number = " << sq(5)<<"\n";
    cout << "Cube of number = " << cube(2);
    return 0;
}