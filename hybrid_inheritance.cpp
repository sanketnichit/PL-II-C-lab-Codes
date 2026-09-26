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

class fare
{
public:
    fare()
    {
        cout << "Fare of vehicle is applied" << endl;
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

class bus : public vehicle, public fare
{
public:
    bus()
    {
        cout << "This vehicle is a bus with fare" << endl;
    }
};

int main()
{
    bus obj;
    return 0;
}