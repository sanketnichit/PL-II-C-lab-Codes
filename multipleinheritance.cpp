#include <iostream>
using namespace std;

class land_vehicle
{
public:
    void landInfo()
    {
        cout << "This is a land vehicle" << endl;
    }
};

class water_vehicle
{
public:
    void waterInfo()
    {
        cout << "This is a water vehicle" << endl;
    }
};

class amphibious_vehicle : public land_vehicle, public water_vehicle
{
public:
    amphibious_vehicle()
    {
        cout << "This is an amphibious vehicle" << endl;
    }
};

int main()
{
    amphibious_vehicle obj;

    obj.landInfo();
    obj.waterInfo();

    return 0;
}