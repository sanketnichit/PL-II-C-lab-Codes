#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Item {
public:
    string itemName;
    float price;
    float gst;

    void calculateGST(float rate) {
        gst = price * rate;
    }
};

class HotelBill {
private:
    int billNo;
    string customerName;
    string phoneNumber;
    int n;
    Item items[20]; 
    float totalAmount;
    float totalGST;

public:
    void input() {
        const float GST_RATE = 18.00%

        cout << "Enter Bill Number: ";
        cin >> billNo;
        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Phone Number: ";
        getline(cin, phoneNumber);

        cout << "Enter number of items: ";
        cin >> n;

        totalAmount = 0;
        totalGST = 0;

        for (int i = 0; i < n; i++) {
            cin.ignore();
            cout << "\nEnter item " << i + 1 << " name: ";
            getline(cin, items[i].itemName);

            cout << "Enter price: ";
            cin >> items[i].price;

            items[i].calculateGST(GST_RATE);

            totalAmount += items[i].price;
            totalGST += items[i].gst;
        }
    }

    void display() {
        cout << "\n\n------------- HOTEL BILL -------------\n";
        cout << "Bill No        : " << billNo << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Phone Number  : " << phoneNumber << endl;
        cout << "--------------------------------------\n";

        cout << left << setw(15) << "Item"
             << setw(10) << "Price"
             << setw(10) << "GST" << endl;
        cout << "--------------------------------------\n";

        for (int i = 0; i < n; i++) {
            cout << left << setw(15) << items[i].itemName
                 << setw(10) << fixed << setprecision(2) << items[i].price
                 << setw(10) << items[i].gst << endl;
        }

        cout << "--------------------------------------\n";
        cout << fixed << setprecision(2);
        cout << "Total Amount : " << totalAmount << endl;
        cout << "Total GST    : " << totalGST << endl;
        cout << "Grand Total  : " << totalAmount + totalGST << endl;
        cout << "--------------------------------------\n";
        cout << "Thank You! Visit Again\n";
    }
};

int main() {
    HotelBill bill;
    bill.input();
    bill.display();
    return 0;
}
