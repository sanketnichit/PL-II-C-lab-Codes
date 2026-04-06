#include <iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "This vehicle is a vehicle" << endl;
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

class bus : public car
{
public:
    bus()
    {
        cout << "This vehicle is a bus" << endl;
    }
};

int main()
{
    bus obj;
    return 0;
}
