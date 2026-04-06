#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    string patientName;
    int patientNo;
    string appointmentDate;
    float billingAmount;

public:
    Patient()
    {
        patientName = "Unknown";
        patientNo = 0;
        appointmentDate = "Not Assigned";
        billingAmount = 0.0;
    }

    Patient(string name, int no, string date, float amount)
    {
        patientName = name;
        patientNo = no;
        appointmentDate = date;
        billingAmount = amount;
    }

    Patient(const Patient &p)
    {
        patientName = p.patientName;
        patientNo = p.patientNo;
        appointmentDate = p.appointmentDate;
        billingAmount = p.billingAmount;
    }

    void display()
    {
        cout << "Patient Name: " << patientName << endl;
        cout << "Patient Number: " << patientNo << endl;
        cout << "Appointment Date: " << appointmentDate << endl;
        cout << "Billing Amount: Rs. " << billingAmount << endl;
        cout << endl;
    }
};

int main()
{
    Patient p1;
    p1.display();

    Patient p2("Amit Sharma", 101, "20-03-2026", 4800);
    p2.display();

    Patient p3(p2);
    p3.display();

    return 0;
}
 