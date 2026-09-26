#include <iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};

class car : public vehicle
{
public:
    car()
    {
        cout << "This vehicle is a car" << endl;
    }
};

class bus : public vehicle
{
public:
    bus()
    {
        cout << "This vehicle is a bus" << endl;
    }
};

int main()
{
    car obj1;
    cout << endl;
    bus obj2;

    return 0;
}