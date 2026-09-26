#include <iostream>
using namespace std;
class bankaccount
{
    private:
        float balance;
        
    public:
        bankaccount(float b)
        {
            balance=b;
        }
        friend class audit;
};
class audit
{
    public:
    void showBalance(bankaccount acc)
    {
        cout<<"balance:"<<acc.balance<<endl;
    }
};
int main()
{
    bankaccount b1(1000.5);
    audit a;
    a.showBalance(b1);
    return 0;
}    
